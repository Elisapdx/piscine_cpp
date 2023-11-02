/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:46:27 by elisa             #+#    #+#             */
/*   Updated: 2023/10/01 15:40:59 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name) {
	
	std::cout << "Zombie create" << std::endl;
	
}

Zombie::~Zombie() {
	
	std::cout << this->name << ": Zombie destroyed" << std::endl;
	
}

void	Zombie::announce(void) {
	
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	
}