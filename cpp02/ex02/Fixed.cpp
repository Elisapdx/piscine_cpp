/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:39:21 by elisa             #+#    #+#             */
/*   Updated: 2023/10/12 19:31:39 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0) {
}

Fixed::Fixed(const Fixed &copy) {

	*this = copy;

}

Fixed::Fixed(const int nb) {

	this->value = nb << this->bit;
	
}

Fixed::Fixed(const float nb) {

	this->value = roundf(nb * (1 << this->bit));
	
}

Fixed::~Fixed() {
}

void	Fixed::operator=(const Fixed &copy) {

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

bool Fixed::operator>(Fixed const &x) 
{
	return this->value > x.getRawBits();
}

bool Fixed::operator<(Fixed const &x) 
{
	return this->value < x.getRawBits();
}

bool Fixed::operator>=(Fixed const &x) 
{
	return this->value >= x.getRawBits();
}

bool Fixed::operator<=(Fixed const &x) 
{
	return this->value <= x.getRawBits();
}

bool Fixed::operator==(Fixed const &x) 
{
	return this->value == x.getRawBits();
}

bool Fixed::operator!=(Fixed const &x) 
{
	return this->value != x.getRawBits();
}

Fixed Fixed::operator+(Fixed const &x) 
{
	return (Fixed(this->toFloat() + x.toFloat()));
}

Fixed Fixed::operator-(Fixed const &x) 
{
	return (Fixed(this->toFloat() - x.toFloat()));
}

Fixed Fixed::operator*(Fixed const &x) 
{
	return (Fixed((float) this->toFloat() * (float) x.toFloat()));
}

Fixed Fixed::operator/(Fixed const &x) 
{
	return (Fixed((float) this->toFloat() / (float) x.toFloat()));
}

Fixed& Fixed::operator++(void) 
{
	this->value++;
	return(*this);
}

Fixed& Fixed::operator--(void) 
{
	this->value--;
	return(*this);
}

Fixed Fixed::operator++(int) 
{
	Fixed newFixed(*this);

	++(*this);
	return(newFixed);
}

Fixed Fixed::operator--(int) 
{
	Fixed newFixed(*this);

	--(*this);
	return(newFixed);
}

const Fixed& Fixed::max(const Fixed& x, const Fixed& y)
{
	if (x.value < y.value)
		return y;
	return x;
}

const Fixed& Fixed::min(const Fixed& x, const Fixed& y)
{
	if (x.value > y.value)
		return y;
	return x;
}

Fixed& Fixed::max(Fixed& x, Fixed& y)
{
	if (x < y)
		return y;
	return x;
}

Fixed& Fixed::min(Fixed& x, Fixed& y)
{
	if (x > y)
		return y;
	return x;
}