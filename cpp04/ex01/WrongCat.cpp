/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:13:13 by elisa             #+#    #+#             */
/*   Updated: 2023/10/21 15:52:08 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
	
}

WrongCat::WrongCat(const WrongCat &copy) {
	
	*this = copy;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	
	std::cout << "WrongCat destructor called" << std::endl;
	
}

WrongCat &	WrongCat::operator=(const WrongCat &copy)
{
	this->type = copy.type;
	std::cout << "WrongCat assignation operator called" << std::endl;
	return (*this);
}

void WrongCat::makeSound() {

	std::cout << this->type << ": meows like a WrongCat!" << std::endl;
	
}