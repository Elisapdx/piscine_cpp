/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:43:46 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/23 10:10:13 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

	public:

		Intern();
		~Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &copy);
		
		AForm	*makeForm(std::string type, std::string target);

		class NoMatchFound : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};
};