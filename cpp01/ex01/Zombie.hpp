/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:09:27 by elisa             #+#    #+#             */
/*   Updated: 2023/10/25 16:15:47 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class Zombie {

	private:

		std::string name;

	public:

		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	setname(std::string name);
		void	announce(void);
	
};

Zombie*    zombieHorde( int N, std::string name );