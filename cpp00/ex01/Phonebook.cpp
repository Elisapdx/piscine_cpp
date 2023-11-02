/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:49:36 by elisa             #+#    #+#             */
/*   Updated: 2023/09/29 18:40:38 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void): nbr(0), last(-1) {
}

Phonebook::~Phonebook(void) {
}

int	ft_isdigit(int c)
{
	if (48 <= c && 57 >= c)
		return (1);
	return (0);
}

bool	Phonebook::verifnb(std::string str) {
	
	bool isnumber = true;
	
	for (std::string::const_iterator s = str.begin(); s != str.end(); s++) {
		
		if (!isdigit(*s))
			isnumber = false;
	}
	return (isnumber);
}

void	Phonebook::add() {
	
	std::string line;
	Contact c = Contact();
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenb;
	std::string secret;
	int i = 0;

	do {
    getline(std::cin,line);
	std::cout << "first name: ";
  } while (!line.empty());
	std::cin >> firstname;
	c.setf_name(firstname);
	
	do {
    getline(std::cin,line);
	std::cout << "last name: ";
  } while (!line.empty());
	std::cin >> lastname;
	c.setl_name(lastname);
	
	do {
    getline(std::cin,line);
	std::cout << "nickname: ";
  } while (!line.empty());
	std::cin >> nickname;
	c.setnickname(nickname);
	
	do {
    getline(std::cin,line);
	std::cout << "phone number: ";
  } while (!line.empty());
	std::cin >> phonenb;
	while (!verifnb(phonenb))
	{
		std::cout << "Impossible phone number" << std::endl;
		std::cout << "phone number: ";
		std::cin >> phonenb;
	}
	c.setphone_num(phonenb);
	
	do {
    getline(std::cin,line);
	std::cout << "darkest secret: ";
  } while (!line.empty());
	std::cin >> secret;
	c.setsecret(secret);
	if (last < 7)
	{
		this->nbr++;
		this->last++;
	}
	else
		this->last = 0;
	this->Contacttab[last] = c;
	std::cout << "contact add" << std::endl;
}

void	Phonebook::search() {
	
	Contact c = Contact();
	std::string line;
	std::string str;
	int index;

	std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
	std::cout << "|   Index  |First Name| Last Name| Nickname |" << std::endl;
	std::cout << " ---------- ---------- ---------- ----------" << std::endl;

	int i = 0;
	while (i < nbr && i < 8)
	{
		std::cout << '|';
		std::cout << std::setw(10) << i + 1 << '|' << Contacttab[i].Info() << std::endl;
		std::cout << " ---------- ---------- ---------- ----------" << std::endl;
		i++;
	}
	std::cout << std::endl;
	
	do {
    getline(std::cin,line);
	std::cout << "index of the contact: ";
  } while (!line.empty());
	std::cin >> str;
	
	index = std::atoi(str.c_str());
	if (index >= 1 && index <= 8)
		Contacttab[index - 1].Infoplus();
	else
		std::cout << "Index invalid" << std::endl;
}