/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:02:52 by elisa             #+#    #+#             */
/*   Updated: 2024/02/02 13:18:03 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		std::cout << "\033[36mDefault constructor\033[0m" << std::endl;
		Bureaucrat();
		std::cout << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "\033[33mConstructing failed: " << e.what() << std::endl << "\033[0m" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "\033[33mConstructing failed: " << e.what() << std::endl << "\033[0m" << std::endl;
	}

	try {
		std::cout << "\033[36mGood grade\033[0m" << std::endl;
		Bureaucrat("boby", 120);
		std::cout << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "\033[33mConstructing failed: " << e.what() << std::endl << "\033[0m" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "\033[33mConstructing failed: " << e.what() << std::endl << "\033[0m" << std::endl;
	}
	
	try {
		std::cout << "\033[36mToo low grade\033[0m" << std::endl;
		Bureaucrat("win", 151);
		std::cout << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "\033[33mConstructing failed: " << e.what() << std::endl << "\033[0m" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "\033[33mConstructing failed: " << e.what() << std::endl << "\033[0m" << std::endl;
	}

	try {
		std::cout << "\033[36mToo high grade\033[0m" << std::endl;
		Bureaucrat("charlie", 0);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "\033[33mConstructing failed: " << e.what() << std::endl << "\033[0m" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "\033[33mConstructing failed: " << e.what() << std::endl << "\033[0m" << std::endl;
	}
}