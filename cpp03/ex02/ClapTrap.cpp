/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:56:22 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 13:46:43 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("bob"), hit(10), energy(10), AD(0) {
	
	std::cout << "ClapTrap Default constructor called" << std::endl;
	
}

ClapTrap::ClapTrap(std::string name): name(name), hit(10), energy(10), AD(0) {
	
	std::cout << "ClapTrap constructor called" << std::endl;
	
}

ClapTrap::ClapTrap(const ClapTrap &copy) {

	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
	
}

ClapTrap::~ClapTrap() {
	
	std::cout << "ClapTrap destructor called" << std::endl;
	
}

void	ClapTrap::setname(std::string name) {
	
	this->name = name;
	
}

void ClapTrap::sethit(int hit) {
	
	this->hit = hit;
	
}

void ClapTrap::setenergy(int energy) {
	
	this->energy = energy;
	
}

void ClapTrap::setAD(int AD) {
	
	this->AD = AD;
	
}

std::string	ClapTrap::getName(void) {
	
	return this->name;
	
}

int ClapTrap::getAD(void) {
	
	return this->AD;
	
}

int ClapTrap::gethit(void) {
	
	return this->hit;
	
}

int ClapTrap::getenergy(void) {
	
	return this->energy;
	
}

void ClapTrap::attack(const std::string &target) {
	
	if (this->energy > 0 && this->hit > 0)
	{
		std::cout << "\033[31mClapTrap " << this->getName() << " attack " << target;
		std::cout << ", causing " << this->getAD() << " points of damage!\033[0m" << std::endl;
		std::cout << std::endl;
		this->energy--;
	}
	else if (this->energy == 0 && this->hit > 0)
	{	
		std::cout << this->getName() << "no longer has the energy to attack!" << std::endl;
		std::cout << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	if (this->hit >= 0 && this->hit > amount)
	{
		this->hit -= amount;
		this->AD = amount;
		std::cout << this->getName() << " lost " << amount << " life points! (hit left: " << this->gethit() << ")."<< std::endl;
		std::cout << std::endl;
	}
	else
	{
		this->hit = 0;
		this->AD = amount;
		std::cout << this->getName() << " it's over, you're dead..." << std::endl;
		std::cout << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (this->hit > 0 && this->energy > 0 && this->energy >= amount)
	{
		this->hit++;
		this->energy--;
		std::cout << this->getName() << "\033[32m exchanges an energy point for a life point!";
		std::cout << " (energy left: " << this->getenergy() << ", hit left: " << this->gethit() << ").\033[0m"<< std::endl;
		std::cout << std::endl;
	}
	else if ((this->hit == 0 || this->energy == 0))
	{
		std::cout << this->getName() << " doesn't have enough energy or life to repair himself..." << std::endl;
		std::cout << std::endl;
	}
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy) 
{
	this->name = copy.name;
	this->hit = copy.hit;
	this->energy = copy.energy;
	this->AD = copy.AD;
	return (*this);
}