/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:46:33 by elisa             #+#    #+#             */
/*   Updated: 2023/10/01 15:51:55 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump(std::string name);

int main()
{
	std::cout << "============= stackZombies =============" << std::endl;
	
	Zombie	zombie1("Bob");
	Zombie	zombie2("Patrick");
	Zombie	zombie3("Carlo");
	
	std::cout << std::endl;
	zombie1.announce();
	zombie2.announce();
	zombie3.announce();
	std::cout << std::endl;
	
	randomChump("Sandy");
	std::cout << std::endl;
	
	std::cout << "============= heapZombies ==============" << std::endl;
	
	Zombie	*heapZ;

	heapZ = newZombie("Sheldon"); std::cout << std::endl;
	
	heapZ->announce(); std::cout << std::endl;
	
	std::cout << "============= Death of Zombies ==============" << std::endl;
	std::cout << std::endl;
	delete(heapZ);

	return (0);
}
