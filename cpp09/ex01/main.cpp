/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:17:52 by epraduro          #+#    #+#             */
/*   Updated: 2024/03/12 19:22:56 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RNP.hpp"

int main(int ac, char **av) {
	
	try {
		if (ac < 2)
			return 1;
		RNP oui;
		std::cout << oui.evaluerExpressionRPN(av[1]) << std::endl;
	} catch (RNP::Exception_custom &e) {
			std::cout << e.what() << std::endl;
	}	
	return 0;
}