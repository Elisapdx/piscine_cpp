/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:54:05 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/17 14:28:37 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	
	std::vector<int> vec;
	vec.push_back(1);	// utiliser pour remplacer vec = {1, ..., 5}; compliable sous c++11;
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	int valueToFind = 6;
	int valueToFind2 = 3;
	int index = easyfind(vec, valueToFind);
	int index2 = easyfind(vec, valueToFind2);

	if (index != -1) {
		std::cout << "La valeur " << valueToFind << " a été trouvée à l'index : " << index << std::endl;
	} else {
		std::cout << "La valeur " << valueToFind << " n'a pas été trouvée dans le vecteur." << std::endl;
	}
	if (index2 != -1) {
		std::cout << "La valeur " << valueToFind2 << " a été trouvée à l'index : " << index2 << std::endl;
	} else {
		std::cout << "La valeur " << valueToFind2 << " n'a pas été trouvée dans le vecteur." << std::endl;
	}

	return 0;
}