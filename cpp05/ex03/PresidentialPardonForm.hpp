/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:41:43 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/22 20:41:45 by epraduro         ###   ########.fr       */
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
