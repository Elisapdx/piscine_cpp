/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:13:15 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 20:16:02 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal {

	protected:

		std::string type;

	public:

		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal&	operator=(const WrongAnimal &copy);
		std::string getType();
		virtual void makeSound();
	
};