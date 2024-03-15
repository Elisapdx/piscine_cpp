/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:17:25 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/19 16:20:57 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void putchar(char c)
{
	std::cout << c;
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::cout << "Array of char: ";
		::iter(av[1], strlen(av[1]), putchar);
	}
	else
		std::cout << "Argument is missing!" << std::endl;
}
