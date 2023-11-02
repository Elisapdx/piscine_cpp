/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:13:11 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 20:18:18 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

	std::cout << "WrongAnimal constructor called" << std::endl;
	
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal destructor called" << std::endl;
	
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	
	*this = copy;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.type;
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	return (*this);
}

std::string WrongAnimal::getType() {

	return(this->type);
	
}

void WrongAnimal::makeSound() {

	std::cout << "WrongAnimal does a weird default sound" << std::endl;
	
}