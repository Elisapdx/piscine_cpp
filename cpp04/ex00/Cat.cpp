/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:14:27 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 18:58:22 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	
}

Cat::Cat(const Cat &copy) {
	
	*this = copy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	
	std::cout << "Cat destructor called" << std::endl;
	
}

Cat &	Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	std::cout << "Cat assignation operator called" << std::endl;
	return (*this);
}

void Cat::makeSound() {

	std::cout << "Meeeeooow" << std::endl;
	
}