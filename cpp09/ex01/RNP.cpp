/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RNP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:44 by epraduro          #+#    #+#             */
/*   Updated: 2024/03/13 12:15:14 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RNP.hpp"

RNP::RNP() {}

RNP::~RNP() {}

RNP::RNP(const RNP &copy) {
	*this = copy;
}

RNP &RNP::operator=(const RNP &copy) {
	if (this == &copy)
		return (*this);
	return (*this);
}

const char *RNP::Exception_custom::what(void) const throw()
{
	return ("Error");
};

int RNP::check_spaces(const std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (!isnumber(str[0]))
			return (-1);
		if (str[i] == '+' || str[i] == '*' || str[i] == '-' || str[i] == '/' || isnumber(str[i]))
		{
			if (str[i + 1] && str[i + 1] != ' ')
				return (-1);
			i++;
		}
		else if (str[i] == ' ')
			i++;
		else
			return (-1);
	}
	return (1);
}

int RNP::evaluerExpressionRPN(const std::string& expression)
{
	std::stack<int> pile;   //container 
	std::istringstream iss(expression);   // Création d'un flux d'entrée de chaîne à partir de la chaîne de caractères
	std::string token;

	// Extraction des tokens de la chaîne de caractères
	while (iss >> token)
	{
		if (check_spaces(expression) == -1)
			throw RNP::Exception_custom();
		if (isnumber(token[0]))
		{
			int number = atoi(token.c_str());
			if (number >= 10)
				throw RNP::Exception_custom();
			pile.push(number); // Convertir le token en nombre entier et l'empile
		}
		else if (token[0] == '+' || token[0] == '-' || token[0] == '/' || token[0] == '*')
		{
			if (pile.size() < 2)
				throw RNP::Exception_custom();
				
			int operand2 = pile.top();  //affecte la valeur du sommet de la pile a operand2
			pile.pop();  // appele pour retirer cette valeur de la pile
			int operand1 = pile.top();
			pile.pop();
			
			switch (token[0])
			{
				case '+': pile.push(operand1 + operand2); break;
				case '-': pile.push(operand1 - operand2); break;
				case '*': pile.push(operand1 * operand2); break;
				case '/': pile.push(operand1 / operand2); break;
				default:
					throw RNP::Exception_custom();
			}
		}
		else
			throw RNP::Exception_custom();
	}
	return pile.top(); // Résultat final
}
