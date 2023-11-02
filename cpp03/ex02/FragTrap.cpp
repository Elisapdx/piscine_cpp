/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:56:34 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 14:54:49 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
	this->name = "bob";
	this->energy = 100;
	this->AD = 30;
	this->hit = 100;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	
	this->name = name;
	this->energy = 100;
	this->AD = 30;
	this->hit = 100;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &s_copy) {

	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = s_copy;
	
}

FragTrap::~FragTrap() {
	
	std::cout << "FragTrap destructor called" << std::endl;
	
}

void FragTrap::highFivesGuys(void) {
	
	std::cout << "FragTrap " << this->name << " request a high five!" << std::endl;
	
}

void FragTrap::attack(const std::string &target) {
	
	if (this->energy > 0 && this->hit > 0)
	{
		std::cout << "\033[31mClapTrap " << this->name << " attack " << target;
		std::cout << ", causing " << this->AD << " points of damage!\033[0m" << std::endl;
		std::cout << std::endl;
		this->energy--;
	}
	else if (this->energy == 0 && this->hit > 0)
	{	
		std::cout << this->name << "no longer has the energy to attack!" << std::endl;
		std::cout << std::endl;
	}
}

FragTrap& FragTrap::operator=(const FragTrap &copy) 
{
	this->name = copy.name;
	this->hit = copy.hit;
	this->energy = copy.energy;
	this->AD = copy.AD;
	return (*this);
}