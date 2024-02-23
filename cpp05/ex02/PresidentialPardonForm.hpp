/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:42:23 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/08 12:54:07 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {

	private:
		std::string _target;
	
	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();
		std::string getTarget() const;

		void execute(const Bureaucrat & executor) const;

		class NotSigned : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};
};
