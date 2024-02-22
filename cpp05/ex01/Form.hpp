/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:07:00 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/19 16:08:15 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const std::string _Name;
		bool		_sign;
		const int	_gradeTosign;
		const int	_gradeToexec;
		
	public:
		Form();
		Form(const std::string name, int sign_grade, int exec_grade);
		~Form();
		Form(const Form &copy);
		Form&	operator=(const Form &copy);
		int getGradeToSign() const;
		int getGradeToExec() const;
		Form&	beSigned(Bureaucrat &signer);
		bool	getIsSignedBool(void) const;
		const std::string getname() const;

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

std::ostream&	operator<<(std::ostream &out, const Form *target);