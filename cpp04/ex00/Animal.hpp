/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:09:42 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 20:05:39 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal {

	protected:

		std::string type;

	public:

		Animal();
		~Animal();
		Animal(const Animal &copy);
		Animal&	operator=(const Animal &copy);
		std::string getType();
		virtual void makeSound();
	
};