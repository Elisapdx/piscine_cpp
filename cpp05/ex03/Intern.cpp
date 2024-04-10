/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:56:25 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/23 10:12:57 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor called " << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern default destructor called " << std::endl;
}

Intern::Intern(const Intern &copy) {
	std::cout << "Intern copy constructor called " << std::endl;
	*this = copy;
}

Intern& Intern::operator=(const Intern &copy) {
	std::cout << "Intern assignation operator called " << std::endl;
	if (this == &copy)
		return (*this);
	return (*this);
}

const char *Intern::NoMatchFound::what(void) const throw()
{
	return ("No match found");
};

AForm	*Intern::makeForm(std::string type, std::string target)
{
	std::string strs[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int			level = 3;
	int			i = 0;

	while (i < 3)
	{
		if (strs[i].compare(type) == 0)
		{
			level = i;
			i += 3;
		}
		i ++;
	}
	switch (level)
	{
		case 0:
			std::cout << "Intern creates robotomy request form" << std::endl;
			return (new RobotomyRequestForm(target));
		case 1:
			std::cout << "Intern creates presidential pardon form" << std::endl;
			return (new PresidentialPardonForm(target));
		case 2:
			std::cout << "Intern creates shrubbery creation form" << std::endl;
			return (new ShrubberyCreationForm(target));
		default:
			std::cout << "Form type doesn't exist." << std::endl;
			throw NoMatchFound();
			return(0);
	}

}