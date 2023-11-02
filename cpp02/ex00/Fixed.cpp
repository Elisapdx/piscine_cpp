/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:39:04 by elisa             #+#    #+#             */
/*   Updated: 2023/10/12 19:25:10 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0) {
	
	std::cout << "Default constructor called" << std::endl;
	
}

Fixed::Fixed(const Fixed &copy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	
}

Fixed::~Fixed() {
	
	std::cout << "Destructor called" << std::endl;
	
}

void	Fixed::operator=(const Fixed &copy) {

	std::cout << "Copy Assignment operator called" << std::endl;
	this->setRawBits(copy.getRawBits());
	
}

int Fixed::getRawBits( void ) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return(this->value);
	
}
	
void Fixed::setRawBits( int const raw ) {

	this->value = raw;
	
}