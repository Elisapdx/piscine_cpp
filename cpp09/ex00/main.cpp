/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:34:14 by epraduro          #+#    #+#             */
/*   Updated: 2024/03/12 13:36:57 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	
	if (ac == 2) {
		
		BitcoinExchange oui;

		oui.input(av[1]);

	}
	else
		std::cout << "Error: could not open file" << std::endl;
}