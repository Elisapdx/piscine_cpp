/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:09:24 by elisa             #+#    #+#             */
/*   Updated: 2023/10/05 14:52:22 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	int nbzombie = 10;
	Zombie *Horde = zombieHorde(nbzombie, "Bob");
	
	for (int i = 0; i < nbzombie; i++) {
		Horde->announce();
	}
	delete [] Horde;
	std::cout << "The zombie horde of " << nbzombie << " has just been eradicated !" << std::endl;
	return (0);
}