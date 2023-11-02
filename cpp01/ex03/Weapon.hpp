/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:08:06 by elisa             #+#    #+#             */
/*   Updated: 2023/10/25 16:15:38 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>

class Weapon {
	
	private:

		std::string type;

	public:

		Weapon(std::string type);
		~Weapon();
		std::string&	getType();
		void	setType(std::string type);
	
};