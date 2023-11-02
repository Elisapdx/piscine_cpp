/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:24:58 by elisa             #+#    #+#             */
/*   Updated: 2023/10/23 11:32:49 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	
	std:: cout << "\033[32m[ Animal ]\033[0m" << std::endl;
	Animal* meta = new Animal(); 
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
    meta->makeSound();
	std::cout << std::endl;
	delete(i);
	delete(j);
	delete(meta);

	std::cout << std::endl;
	std:: cout << "\033[31m[ WrongAnimal ]\033[0m" << std::endl;
	WrongAnimal* x = new WrongAnimal(); 
	WrongAnimal* y = new WrongCat();
	WrongAnimal t = WrongAnimal(*x);
	WrongAnimal o = t;

	std::cout << std::endl;
	std::cout << y->getType() << " " << std::endl;
	y->makeSound();
    x->makeSound();
	std::cout << std::endl;
	delete(y);
	delete(x);
	return 0; 
}