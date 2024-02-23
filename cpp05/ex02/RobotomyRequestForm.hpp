/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:45:42 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/08 12:55:22 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm {

	private:
		std::string _target;
	
	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();
		std::string getTarget() const;
	
		void execute(const Bureaucrat & executor) const;
		
		class NotSigned : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};
};
