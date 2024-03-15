/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:47:09 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/23 12:10:04 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base* generate(void) {
	
	std::srand(static_cast<unsigned>(time(0)));
	int random = std::rand();
	if (random % 2 == 0)
		return new A;
	else if (random % 3 == 0)
		return new B;
	else 
		return new C;
}

void identify(Base* p) {
	
	if(dynamic_cast<A*>(p))
		std::cout << "Class A" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "Class B" << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "Class C" << std::endl;
	
}

void identify(Base& p) {
	
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "Class A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void) dynamic_cast<B&>(p);
			std::cout << "Class B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void) dynamic_cast<C&>(p);
				std::cout << "Class C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Unknow" << std::endl;
			}
		}
	}
}

int main() {
	
	Base *hey;

	std::cout << "\033[36m******Randomly intantiates*******\033[0m]" << std::endl;
	hey = generate();
	std::cout << hey << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[36m****Print the actual type with a pointer****\033[0m]" << std::endl;
	identify(hey);
	std::cout << std::endl;
	
	std::cout << "\033[36m****Print the actual type with a reference****\033[0m]" << std::endl;
	identify(*hey);

	return (0);
}