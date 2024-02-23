/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:42:32 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/22 20:42:35 by epraduro         ###   ########.fr       */
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
