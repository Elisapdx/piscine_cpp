/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:32:57 by elisa             #+#    #+#             */
/*   Updated: 2023/11/01 13:15:22 by elisa            ###   ########.fr       */
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

Fixed::Fixed(const int nb) {

	std::cout << "Int constructor called" << std::endl;
	this->value = nb << this->bit;
	
}

Fixed::Fixed(const float nb) {

	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(nb * (1 << this->bit));
	
}

Fixed::~Fixed() {
	
	std::cout << "Destructor called" << std::endl;
	
}

void	Fixed::operator=(const Fixed &copy) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(copy.getRawBits());
	
}

int Fixed::getRawBits( void ) const {

	return(this->value);
	
}
	
void Fixed::setRawBits( int const raw ) {

	this->value = raw;
	
}

float Fixed::toFloat( void ) const {

	return ((float) this->value / (1 << this->bit));
	
}

int Fixed::toInt( void ) const {
	
	return((int) this->value >> this->bit);
	
}

std::ostream &operator<<(std::ostream &stream, const Fixed &x)
{
	stream << x.toFloat();
	return(stream);
}
