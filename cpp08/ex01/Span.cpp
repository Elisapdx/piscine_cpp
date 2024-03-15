/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:01:01 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/19 16:22:45 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int nb): _N(nb), _size(0) {
	this->_tab = new int[nb];
}

Span::~Span() {
}

Span::Span(const Span &copy) {
	
	std::cout << "Span copy constructor called" << std::endl;
	*this = copy;
}

Span &Span::operator=(const Span &copy) {

	std::cout << "Span assignation operator called" << std::endl;
	this->_N = copy._N;
	this->_size = copy._size;
	this->_tab = copy._tab;
	return (*this);
}

void	Span::addNumber(int nb) {

	if (this->_size == this->_N)
		throw NotMoreAddNumber();
	this->_tab[this->_size++] = nb;
	
}

int		Span::shortestSpan() {
	
	unsigned int i = 0;
	unsigned int res;
	unsigned int diff;
	
	if (this->_size <= 1)
		throw LowDistance();
	
	res = 4294967295;	//unsigned int max value;
	while (i < this->_size)
	{
		diff = abs(this->_tab[i] - this->_tab[i + 1]);
		if (diff < res)
			res = diff;
		i++;
	}
	return (res);
}

int		Span::longestSpan() {
	
	unsigned int i = 0;
	unsigned int res = 0;
	unsigned int diff = 0;
	
	if (this->_size <= 1)
		throw LowDistance();
	
	while (i < this->_size)
	{
		diff = abs(this->_tab[i] - this->_tab[i + 1]);
		if (diff > res)
			res = diff;
		i++;
	}
	return (res);
}
