/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:17:29 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 20:06:29 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {

	std::cout << "Animal constructor called" << std::endl;
	
}

Animal::~Animal() {

	std::cout << "Animal destructor called" << std::endl;
	
}

Animal::Animal(const Animal &copy) {
	
	*this = copy;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal &copy)
{
	this->type = copy.type;
	std::cout << "Animal assignation operator called" << std::endl;
	return (*this);
}

std::string Animal::getType() {

	return(this->type);
	
}

void Animal::makeSound() {

	std::cout << "Animal does a weird default sound" << std::endl;
	
}