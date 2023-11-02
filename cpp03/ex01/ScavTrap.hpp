/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:25:17 by elisa             #+#    #+#             */
/*   Updated: 2023/10/17 20:39:31 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap 
{
	public:
		
		ScavTrap();
		ScavTrap(std::string s_name);
		~ScavTrap();
		ScavTrap(const ScavTrap &copy);
		
		void guardGate(void);
		void attack(const std::string& target);
		
		ScavTrap &operator=(const ScavTrap &copy);
	
};