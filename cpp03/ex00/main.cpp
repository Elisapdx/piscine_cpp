/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:56:28 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 15:54:37 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*int main()
{
	ClapTrap	bob("bob");
	ClapTrap	patrick("patrick");

	bob.setAD(2);
	bob.attack(patrick.getName());
	patrick.takeDamage(bob.getAD());
	patrick.beRepaired(10);
	bob.attack(patrick.getName());
	patrick.takeDamage(bob.getAD());
	patrick.beRepaired(10);
	patrick.setAD(2);
	patrick.attack(bob.getName());
	bob.takeDamage(patrick.getAD());
	return (0);
}*/


// int main ()
// {
// 	int i = 0;
// 	ClapTrap bob("bob");
// 	ClapTrap patrick("patrick");

// 	bob.setAD(6);
// 	bob.attack(patrick.getName());
// 	patrick.takeDamage(bob.getAD());
	
// 	patrick.setAD(6);
// 	patrick.attack(bob.getName());
// 	bob.takeDamage(patrick.getAD());
	
// 	patrick.beRepaired(3);
	
// 	bob.setAD(8);
// 	bob.attack(patrick.getName());
// 	patrick.takeDamage(bob.getAD());
	
// 	patrick.beRepaired(1);
	
// 	patrick.setAD(1);
// 	bob.takeDamage(patrick.getAD());
// 	bob.takeDamage(patrick.getAD());
// 	bob.takeDamage(patrick.getAD());
// 	bob.takeDamage(patrick.getAD());
	
// 	std::cout << std::endl;
// 	std::cout << "\033[33m[ THE END OF THE TESTS ]\033[0m" << std::endl;
// 	std::cout << "Status of bob's hit points: " << bob.gethit() << ", energy points: " << bob.getenergy() << std::endl;
// 	std::cout << "Status of patrick's hit points: " << patrick.gethit() << ", energy points: " << patrick.getenergy() << std::endl;
// 	std::cout << std::endl;
// }


int main ()
{
	ClapTrap bob("bob");
	ClapTrap patrick("patrick");

	std::cout << std::endl;

	bob.setAD(10);
	patrick.takeDamage(bob.getAD());

	patrick.setAD(9);
	bob.takeDamage(patrick.getAD());
}