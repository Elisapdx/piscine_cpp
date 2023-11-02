/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:13:24 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 15:13:26 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
	this->name = "bob";
	this->energy = 50;
	this->AD = 20;
	this->hit = 100;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	
	this->name = name;
	this->energy = 50;
	this->AD = 20;
	this->hit = 100;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &s_copy) {

	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = s_copy;
	
}

ScavTrap::~ScavTrap() {
	
	std::cout << "ScavTrap destructor called" << std::endl;
	
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " entering to Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	
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

ScavTrap& ScavTrap::operator=(const ScavTrap &copy) 
{
	this->name = copy.name;
	this->hit = copy.hit;
	this->energy = copy.energy;
	this->AD = copy.AD;
	return (*this);
}