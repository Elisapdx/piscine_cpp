/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:04:22 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/23 10:14:24 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
	Bureaucrat	test1("test", 1);
	std::cout << std::endl;
	Intern someRandomIntern;
	std::cout << std::endl;
	AForm* oui;

	oui = someRandomIntern.makeForm("robotomy request", "Marley");
	test1.signForm(oui);
	oui->execute(test1);
	std::cout << std::endl;

	oui = someRandomIntern.makeForm("presidential pardon", "Bob");
	test1.signForm(oui);
	oui->execute(test1);
	std::cout << std::endl;

	oui = someRandomIntern.makeForm("shrubbery creation", "Patrick");
	test1.signForm(oui);
	oui->execute(test1);
	std::cout << std::endl;

	try {
		oui = someRandomIntern.makeForm("request", "OUI");
		test1.signForm(oui);
		std::cout << "oui" << std::endl;
		oui->execute(test1);
		std::cout << std::endl;
	}
	catch (Intern::NoMatchFound &e) {
		std::cerr << "\033[33mERROR: " << e.what() << std::endl << "\033[0m" << std::endl;
	}

	return (0);
}