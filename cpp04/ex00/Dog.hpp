/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:11:49 by elisa             #+#    #+#             */
/*   Updated: 2023/10/19 19:59:59 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal 
{
	public:

		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		void makeSound();
};