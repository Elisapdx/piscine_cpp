/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:07:03 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/19 16:09:27 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _Name("default"), _sign(false), _gradeTosign(150), _gradeToexec(150){
	
	std::cout << "Form default constructor called for " << "\033[31m" << this->getname() << "\033[0m" << std::endl;
}

Form::Form(const std::string name, int sign_grade, int exec_grade): _Name(name), _sign(false), _gradeTosign(sign_grade), _gradeToexec(exec_grade) {
	
	std::cout << "Form constructor called for " << "\033[31m" << this->getname() << "\033[0m" << std::endl;
	
	const int i = this->getGradeToExec();
	const int j = this->getGradeToSign();

	if (i > 150 || j > 150)
		throw Form::GradeTooLowException();
	else if (i < 1 || j < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &copy): _Name(copy.getname()), _sign(false), _gradeTosign(copy.getGradeToSign()), _gradeToexec(copy.getGradeToExec()) {
	
	std::cout << "Form copy constructor called" << std::endl;
	this->_sign = copy.getIsSignedBool();
}

Form&	Form::operator=(const Form &copy)
{
	std::cout << "Form assignation operator called" << std::endl;
	if (this == &copy)
		return(*this);
	return (*this);
}

int Form::getGradeToSign() const {
	return (this->_gradeTosign);
}

int Form::getGradeToExec() const {
	return (this->_gradeToexec);
}


const std::string Form::getname() const{
	return (this->_Name);
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

bool	Form::getIsSignedBool(void)const
{
	return (this->_sign);
}

Form&	Form::beSigned(Bureaucrat &signer) {
	if ((int) signer.getgrade() > this->getGradeToSign())
	{
		std::cout << signer.getname() << " has a grade too low to sign " << this->getname() << " Form." << std::endl;
		throw Form::GradeTooLowException();
	}
	this->_sign = true;
	return (*this);
}

Form::~Form() {
	
	std::cout << "Form destructor for " << "\033[31m" << this->getname() << "\033[0m"<< " called " << std::endl;
	
}

std::ostream&	operator<<(std::ostream &out, const Form *target)
{
	out << target->getname() << ", bureaucrat sign-grade of " << target->getGradeToSign() << " and execution-grade of " << target->getGradeToExec() << ". Signed: " << target->getIsSignedBool();
	return (out);
}