/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:06:22 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/19 13:09:01 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	ScalarConverter value;
	
	if (ac == 2)
	{
		value.convert(av[1]);
		return (0);	
	}
	std::cout << "Argument is missing!" << std::endl;
	return (1);
}