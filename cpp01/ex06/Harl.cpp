/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:28:43 by elisa             #+#    #+#             */
/*   Updated: 2023/10/07 14:59:28 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void) {
	
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger." << std::endl; 
	std::cout << "I really do!" << std::endl;
	
}

void Harl::info( void ) {
	
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
	
}

void Harl::warning( void ) {
	
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	
}

void Harl::error( void ) {
	
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	
}

void    Harl::complain(std::string level) {
	
	void	(Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string Level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	int l = -1;

	while (i < 4)
	{
		if (level == Level[i])
			l = i;
		i++;
	}
	switch (l)
	{
		case 0:
			(this->*ptr[0])(); std::cout << std::endl;
			(this->*ptr[1])(); std::cout << std::endl;
			(this->*ptr[2])(); std::cout << std::endl;
			(this->*ptr[3])(); std::cout << std::endl;
			break;
		
		case 1:
			(this->*ptr[1])(); std::cout << std::endl;
			(this->*ptr[2])(); std::cout << std::endl;
			(this->*ptr[3])(); std::cout << std::endl;
			break;
		
		case 2:
			(this->*ptr[2])(); std::cout << std::endl;
			(this->*ptr[3])(); std::cout << std::endl;
			break;
		
		case 3:
			(this->*ptr[3])(); std::cout << std::endl;
			break;
		
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}