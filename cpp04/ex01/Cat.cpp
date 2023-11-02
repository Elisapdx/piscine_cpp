/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:14:27 by elisa             #+#    #+#             */
/*   Updated: 2023/10/21 15:51:55 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	
}

Cat::Cat(const Cat &copy) {
	
	*this = copy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	
	delete(this->brain);
	std::cout << "Cat destructor called" << std::endl;
	
}

Cat &	Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Cat assignation operator called" << std::endl;
	return (*this);
}

void Cat::makeSound() {

	std::cout << this->type << ": Meeeeoooow " << std::endl;
	
}