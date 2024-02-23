/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:39:33 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/22 20:39:35 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:
		const std::string _Name;
		bool		_sign;
		const int	_gradeTosign;
		const int	_gradeToexec;
		
	public:
		AForm();
		AForm(const std::string name, int sign_grade, int exec_grade);
		virtual ~AForm();
		AForm(const AForm &copy);
		AForm& operator=(const AForm &copy);
		int getGradeToSign() const;
		int getGradeToExec() const;
		AForm&	beSigned(Bureaucrat &signer);
		bool	getIsSignedBool(void) const;
		const std::string getname() const;

		virtual void execute(Bureaucrat const & executor) const = 0;

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

		class NotSigned : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &out, const AForm *target);