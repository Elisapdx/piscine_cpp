/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:15:13 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 18:04:27 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
	ClapTrap::name = "bob_clap_name";
	this->name = "bob";
	this->energy = 50;
	this->AD = 30;
	this->hit = 100;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->energy = 50;
	this->AD = 30;
	this->hit = 100;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &s_copy) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = s_copy;
	
}

DiamondTrap::~DiamondTrap() {
	
	std::cout << "DiamondTrap destructor called" << std::endl;
	
}

void DiamondTrap::attack(const std::string &target) {
	
	ScavTrap::attack(target);
	
}

void DiamondTrap::whoamI() {
	 
	std::cout << "DiamondTrap: " << this->name << ", ClapTrap: " << ClapTrap::name << std::endl;
	
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy) 
{
	this->name = copy.name;
	this->hit = copy.hit;
	this->energy = copy.energy;
	this->AD = copy.AD;
	return (*this);
}