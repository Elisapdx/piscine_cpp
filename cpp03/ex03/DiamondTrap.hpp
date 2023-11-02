/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:15:34 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 16:02:37 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap 
{
	private: 

		std::string name;

	public:

		DiamondTrap();
		DiamondTrap(std::string s_name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &copy);
		
		void attack(const std::string& target);
		void whoamI();
		
		DiamondTrap &operator=(const DiamondTrap &copy);
};