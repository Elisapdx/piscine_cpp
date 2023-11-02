/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:43:15 by elisa             #+#    #+#             */
/*   Updated: 2023/10/07 14:22:47 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl h;
	
	std::cout << "| DEBUG |" << std::endl;
	h.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "| INFO |" << std::endl;
	h.complain("INFO");
	std::cout << std::endl;
	std::cout << "| WARNING |" << std::endl;
	h.complain("WARNING");
	std::cout << std::endl;
	std::cout << "| ERROR |" << std::endl;
	h.complain("ERROR");
	return (0);
}