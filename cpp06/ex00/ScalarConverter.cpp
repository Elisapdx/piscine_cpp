/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:45:34 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/19 16:16:07 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	
}

ScalarConverter::~ScalarConverter() {
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	*this = copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &copy) {
	if (this == &copy)
		return (*this);
	return (*this);
}

void ScalarConverter::convert(std::string str)
{
	double c = atof(str.c_str());

	/*--------CHAR---------*/
	std::cout << "char: ";
	
	if (c < 0 || c > 127 || std::isnan(c) || std::isinf(c))
		std::cout << "Impossible";
	else if (c < 32 || c > 126)
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(c) << "'";
	std::cout << std::endl;

	/*--------INT---------*/
	std::cout << "int: ";

	if (std::isnan(c) || std::isinf(c))
		std::cout << "Impossible";
	else
		std::cout << static_cast<int>(c);
	std::cout << std::endl;

	/*--------FLOAT---------*/
	std::cout << "float: ";
	
	std::cout << static_cast<float>(c);
	if (static_cast<int>(c) == c)
		std::cout << ".0f";
	else
		std::cout << "f";
	std::cout << std::endl;

	/*-------DOUBLE--------*/
	std::cout << "double: ";
	
	std::cout << c;
	if (static_cast<int>(c) == c)
		std::cout << ".0";
	std::cout << std::endl;
}