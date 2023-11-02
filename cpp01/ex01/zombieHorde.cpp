/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:09:21 by elisa             #+#    #+#             */
/*   Updated: 2023/10/05 14:46:16 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {

	Zombie	*horde = new Zombie[N];
	int i = 0;
	
	while (i < N)
	{
		horde[i].setname(name);
		i++;
	}
	return (horde);
}
