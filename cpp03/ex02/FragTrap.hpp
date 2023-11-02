/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:56:38 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 13:29:30 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap 
{
	public:
		
		FragTrap();
		FragTrap(std::string s_name);
		~FragTrap();
		FragTrap(const FragTrap &copy);
		
		void highFivesGuys(void);
		void attack(const std::string& target);
		
		FragTrap &operator=(const FragTrap &copy);
	
};