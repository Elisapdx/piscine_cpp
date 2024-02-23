/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:40:37 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/19 16:12:32 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _Name("default"), _sign(false), _gradeTosign(150), _gradeToexec(150) {
	
	std::cout << "AForm default constructor called for " << "\033[31m" << this->getname() << "\033[0m" << std::endl;
}

AForm::AForm(const std::string name, int sign_grade, int exec_grade): _Name(name), _sign(false), _gradeTosign(sign_grade), _gradeToexec(exec_grade) {
	
	std::cout << "AForm constructor called for " << "\033[31m" << this->getname() << "\033[0m" << std::endl;
	
	const int i = this->getGradeToExec();
	const int j = this->getGradeToSign();

	if (i > 150 || j > 150)
		throw AForm::GradeTooLowException();
	else if (i < 1 || j < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &copy): _Name(copy.getname()), _sign(false), _gradeTosign(copy.getGradeToSign()), _gradeToexec(copy.getGradeToExec()) {
	
	std::cout << "Form copy constructor called" << std::endl;
	this->_sign = copy.getIsSignedBool();
}

AForm	&AForm::operator=(const AForm &copy) {
	
	std::cout << "AForm assignation operator called" << std::endl;
	if (this == &copy)
		return (*this);
	return (*this);
}

int AForm::getGradeToSign() const {
	return (this->_gradeTosign);
}

int AForm::getGradeToExec() const {
	return (this->_gradeToexec);
}


const std::string AForm::getname() const{
	return (this->_Name);
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

bool	AForm::getIsSignedBool(void)const
{
	return (this->_sign);
}

AForm&	AForm::beSigned(Bureaucrat &signer) {
	if ((int) signer.getgrade() > this->getGradeToSign())
	{
		std::cout << signer.getname() << " has a grade too low to sign " << this->getname() << " AForm." << std::endl;
		throw AForm::GradeTooLowException();
	}
	this->_sign = true;
	return (*this);
}

AForm::~AForm() {
	
	std::cout << "AForm destructor for " << "\033[31m" << this->getname() << "\033[0m"<< " called " << std::endl;
	
}

std::ostream&	operator<<(std::ostream &out, const AForm *target)
{
	out << target->getname() << ", bureaucrat sign-grade of " << target->getGradeToSign() << " and execution-grade of " << target->getGradeToExec() << ". Signed: " << target->getIsSignedBool();
	return (out);
}

const char *AForm::NotSigned::what(void) const throw()
{
	return ("Form isn't signed");
};