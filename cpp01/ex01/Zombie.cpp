/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:09:29 by elisa             #+#    #+#             */
/*   Updated: 2023/10/05 14:48:38 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): name("Zombie") {
	return ;
}

Zombie::Zombie(std::string name): name(name) {
	
	std::cout << "Zombie create" << std::endl;
	
}

Zombie::~Zombie() {
	
	std::cout << this->name << ": Zombie destroyed" << std::endl;
	
}

void	Zombie::setname(std::string name) {
	
	this->name = name;
	
}

void	Zombie::announce(void) {
	
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	
}
