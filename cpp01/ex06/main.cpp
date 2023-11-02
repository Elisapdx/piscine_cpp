/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:43:15 by elisa             #+#    #+#             */
/*   Updated: 2023/10/07 14:57:47 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl h;
	
	if (ac == 2)
		h.complain(av[1]);
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (0);
}