/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:04:46 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/19 16:03:06 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:

		const std::string _name;
		int _grade;

	public:

		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat &copy);
		int getgrade();
		std::string getname();
		void upgrade();
		void downgrade();
		void signForm(Form *signer);		
		~Bureaucrat();

		class GradeTooLowException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &out, Bureaucrat *target);