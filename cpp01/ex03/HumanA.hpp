/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:08:02 by elisa             #+#    #+#             */
/*   Updated: 2023/10/25 16:15:06 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA {
	
	private:

		std::string name;
		Weapon &weapon;

	public:
	
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
	
};