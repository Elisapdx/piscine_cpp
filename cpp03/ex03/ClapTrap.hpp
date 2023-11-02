/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:12:50 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 15:32:33 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap {

	protected:
		std::string name;
		int hit;
		int energy;
		int AD;
		
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &copy);
		
		void setname(std::string name);
		void sethit(int hit);
		void setenergy(int energy);
		void setAD(int AD);
		std::string	getName(void);
		int getAD(void);
		int gethit(void);
		int getenergy(void);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		ClapTrap &operator=(const ClapTrap &copy);
};