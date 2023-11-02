/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:11:49 by elisa             #+#    #+#             */
/*   Updated: 2023/10/21 15:25:11 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{

	private:

		Brain *brain;

	public:

		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		void makeSound();
};