/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:07:06 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/02 13:41:26 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *X = new Bureaucrat("Bob", 5);
	std::cout << X << std::endl;

	std::cout << std::endl;
	
	Bureaucrat *Y = new Bureaucrat("Maurice", 60);
	std::cout << Y << std::endl;
	
	std::cout << std::endl;

	try {
		Form *formA = new Form("Adhesion", 20, 10);
		std::cout << formA << std::endl;

		X->signForm(formA);
		std::cout << formA << std::endl;
		delete formA;
		std::cout << std::endl;

		Form *formB = new Form("Adhesion2", 20, 10);
		std::cout << formB << std::endl;
		Y->signForm(formB);
		std::cout << formB << std::endl;
		delete formB;
		std::cout << std::endl;
		
	} catch (Form::GradeTooLowException &e)
	{
		std::cerr << "\033[33mConstructing failed: " << e.what() << std::endl << "\033[0m" << std::endl;
	}

	delete X;
	delete Y;
}