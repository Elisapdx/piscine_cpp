/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:44:35 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 15:00:58 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap	bob("bob");
	ClapTrap patrick("patrick");
	
	std::cout << std::endl;
	bob.attack(patrick.getName());
	patrick.takeDamage(bob.getAD());
	patrick.beRepaired(10);
	bob.attack(patrick.getName());
	patrick.takeDamage(bob.getAD());
	patrick.beRepaired(10);
	patrick.setAD(2);
	patrick.attack(bob.getName());
	bob.takeDamage(patrick.getAD());

	bob.guardGate();

	std::cout << std::endl;
	std::cout << "\033[33m[ THE END OF THE TESTS ]\033[0m" << std::endl;
	std::cout << "Status of bob's hit points: " << bob.gethit() << ", energy points: " << bob.getenergy() << std::endl;
	std::cout << "Status of patrick's hit points: " << patrick.gethit() << ", energy points: " << patrick.getenergy() << std::endl;
	std::cout << std::endl;
	return (0);
}