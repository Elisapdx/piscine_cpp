/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:12:32 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 18:05:00 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main ()
{
	ClapTrap bob("Bob");
	ScavTrap patrick("Patrick");
	FragTrap sandy("Sandy");
	DiamondTrap carlo("Carlo");

	std::cout << std::endl;

	carlo.whoamI();
	std::cout << std::endl;
	
/* Bob attack Patrick */
	bob.setAD(6);
	bob.attack(patrick.getName());
	patrick.takeDamage(bob.getAD());
/* Bob attack Sandy */
	bob.setAD(6);
	bob.attack(sandy.getName());
	sandy.takeDamage(bob.getAD());
/* Bob attack Carlo */
	bob.setAD(6);
	bob.attack(carlo.getName());
	carlo.takeDamage(bob.getAD());

/* Patrick attack Bob */	
	patrick.setAD(6);
	patrick.attack(bob.getName());
	bob.takeDamage(patrick.getAD());
/* Patrick attack Sandy */	
	patrick.setAD(6);
	patrick.attack(sandy.getName());
	sandy.takeDamage(patrick.getAD());
/* Patrick attack Carlo */	
	patrick.setAD(6);
	patrick.attack(carlo.getName());
	carlo.takeDamage(patrick.getAD());

/* Sandy attack Patrick */
	sandy.setAD(6);
	sandy.attack(patrick.getName());
	patrick.takeDamage(sandy.getAD());
/* Sandy attack Bob */	
	sandy.setAD(6);
	sandy.attack(bob.getName());
	bob.takeDamage(sandy.getAD());
/* Sandy attack Carlo */	
	sandy.setAD(6);
	sandy.attack(carlo.getName());
	carlo.takeDamage(sandy.getAD());

/* Carlo attack Patrick */
	carlo.setAD(6);
	carlo.attack(patrick.getName());
	patrick.takeDamage(carlo.getAD());
/* Carlo attack Bob */	
	carlo.setAD(6);
	carlo.attack(bob.getName());
	bob.takeDamage(carlo.getAD());
/* Carlo attack Sandy */	
	carlo.setAD(6);
	carlo.attack(sandy.getName());
	sandy.takeDamage(carlo.getAD());
	
	patrick.beRepaired(1);
	bob.beRepaired(1);
	sandy.beRepaired(1);
	carlo.beRepaired(1);

	patrick.guardGate();
	sandy.highFivesGuys();

	std::cout << std::endl;
	std::cout << "\033[33m[ THE END OF THE TESTS ]\033[0m" << std::endl;
	std::cout << "Status of bob's hit points: " << bob.gethit() << ", energy points: " << bob.getenergy() << std::endl;
	std::cout << "Status of patrick's hit points: " << patrick.gethit() << ", energy points: " << patrick.getenergy() << std::endl;
	std::cout << "Status of sandy's hit points: " << sandy.gethit() << ", energy points: " << sandy.getenergy() << std::endl;
	std::cout << "Status of carlo's hit points: " << carlo.gethit() << ", energy points: " << carlo.getenergy() << std::endl;
	std::cout << std::endl;
	return (0);
}