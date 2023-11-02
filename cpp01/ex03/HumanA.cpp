/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:07:57 by elisa             #+#    #+#             */
/*   Updated: 2023/10/07 13:18:24 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) {
}

HumanA::~HumanA() {
}

void	HumanA::attack() {
	
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	
}