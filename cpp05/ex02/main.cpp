/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:41:38 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/08 15:23:40 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat *boss = new Bureaucrat("Bob", 3);
	std::cout << boss << std::endl;

	std::cout << std::endl;
	
	try {
		AForm *shrubbery = new ShrubberyCreationForm("Marley");
		std::cout << shrubbery << std::endl;
		
		std::cout << std::endl;
		
		AForm *robot = new RobotomyRequestForm("Lucie");
		std::cout << robot << std::endl;

		std::cout << std::endl;

		AForm *pp = new PresidentialPardonForm("Maxime");
		std::cout << pp << std::endl;
		
		std::cout << std::endl;

		boss->signForm(shrubbery);
		boss->executeForm(*shrubbery);
		
		std::cout << std::endl;
		
		boss->signForm(robot);
		boss->executeForm(*robot);
		
		std::cout << std::endl;
		
		boss->signForm(pp);
		boss->executeForm(*pp);
		
		std::cout << std::endl;
		
		delete (shrubbery);
		delete (robot);
		delete (pp);
	}
	catch (AForm::GradeTooHighException &e)
	{
		std::cerr << "\033[33mERROR: " << e.what() << std::endl << "\033[0m" << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cerr << "\033[33mERROR: " << e.what() << std::endl << "\033[0m" << std::endl;
	}
	catch (AForm::NotSigned &e)
	{
		std::cerr << "\033[33mERROR: " << e.what() << std::endl << "\033[0m" << std::endl;
	}
	delete (boss);
	
}