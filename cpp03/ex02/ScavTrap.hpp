/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:06:14 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 13:21:41 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
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