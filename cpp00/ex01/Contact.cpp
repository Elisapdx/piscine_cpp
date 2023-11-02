/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:49:29 by elisa             #+#    #+#             */
/*   Updated: 2023/09/29 18:15:45 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void): f_name(""), l_name(""), nickname(""), phone_num(""), secret("") 
{
}

Contact::~Contact(void) 
{
}

void	Contact::setf_name(std::string f_name) 
{
	this->f_name = f_name;
}

void	Contact::setl_name(std::string l_name) 
{
	this->l_name = l_name;
}

void	Contact::setnickname(std::string nickname) 
{
	this->nickname = nickname;
}

void	Contact::setphone_num(std::string phone_num) 
{
	this->phone_num = phone_num;
}

void	Contact::setsecret(std::string secret) 
{
	this->secret = secret;
}

std::string Contact::getf_name(void) const
{
	return (this->f_name);
}

std::string Contact::getl_name(void) const
{
	return (this->l_name);
}

std::string Contact::getnickname(void) const
{
	return (this->nickname);
}

std::string Contact::getphone_num(void) const
{
	return (this->phone_num);
}

std::string Contact::getsecret(void) const
{
	return (this->secret);
}

std::string Contact::size_ten(std::string str) const
{
	std::string string;
	int i = 0;

	if (str.size() == 10)
		return (str);
	else if (str.size() < 10)
	{
		while (i < 10 - str.size())
		{	
			string.push_back(' ');
			i++;
		}
		string += str;
	}
	else
	{
		i = 0;
		while (i < 9)
		{
			string.push_back(str.at(i));
			i++;
		}
		string.push_back('.');
	}
	return (string);
}

std::string Contact::Info(void) {
	
	std::string str;
	
	str += this->size_ten(this->getf_name());
	str += "|";
	str += this->size_ten(this->getl_name());
	str += "|";
	str += this->size_ten(this->getnickname());
	str += "|";
	
	return (str);
}

void Contact::Infoplus(void) {
	
	std::cout << std::endl;
	std::cout << "---------- ---------- ---------- " << std::endl;
	std::cout << "First Name : " << this->getf_name() << std::endl;
	std::cout << "Last Name : " << this->getl_name() << std::endl;
	std::cout << "Nickame : " << this->getnickname() << std::endl;
	std::cout << "Phone Number : " << this->getphone_num() << std::endl;
	std::cout << "Dark Secret : " << this->getsecret() << std::endl;
	std::cout << "---------- ---------- ---------- " << std::endl;
	std::cout << std::endl;
}
