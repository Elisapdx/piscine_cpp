/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:08:01 by elisa             #+#    #+#             */
/*   Updated: 2023/10/07 13:04:06 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) {
	
	std::cout << "Weapon created" << std::endl;
	
}

Weapon::~Weapon() {
	
	std::cout << "Weapon detroyed" << std::endl;
	
}

void	Weapon::setType(std::string type) 
{
	this->type = type;
}

std::string&	Weapon::getType(void) 
{
	return (this->type);
}
