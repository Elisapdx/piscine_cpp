/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:23:00 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 19:59:11 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	
}

Dog::Dog(const Dog &copy) {
	
	*this = copy;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {

	std::cout << "Dog destructor called" << std::endl;

}

Dog &	Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	std::cout << "Dog assignation operator called" << std::endl;
	return (*this);
}

void Dog::makeSound() {

	std::cout << "Woooooaaaaf" << std::endl;
	
}
