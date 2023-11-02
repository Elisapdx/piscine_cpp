/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:49:34 by elisa             #+#    #+#             */
/*   Updated: 2023/09/29 16:21:07 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int	main() {

	std::string text;
	Phonebook phonebook = Phonebook();
	
	while (!std::cin.eof()) {
		
		std::cout << "Enter ADD, SEARCH or EXIT: ";
		std::cin >> text;
		if (text == "ADD")
			phonebook.add();
		else if (text == "SEARCH")
			phonebook.search();
		else if (text == "EXIT")
			break;
		else
			std::cout << "Please enter one of the three suggested orders" << std::endl;
	}
}
