/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:17:13 by epraduro          #+#    #+#             */
/*   Updated: 2024/03/11 13:54:10 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define SIZE 10

int main( void )
{
	std::cout << "-----------------------------------------------------" << std::endl;

	Array< float > test;

	Array< int > intArray( SIZE );
	Array< int > intArray2( SIZE - 5 );

	unsigned int i = 0;
	while (i < intArray.size()) {
		intArray[i] = i * 2;	// permet une meilleure compréhension 
		i++;
	}

	std::cout << "\033[36mInt Array 1: \033[0m" << intArray << std::endl;

	std::cout << "\033[33mdefault int Array 2: \033[0m" << intArray2 << std::endl;
	
	intArray2 = intArray;

	std::cout << "\033[32mint Array 2: \033[0m" << intArray2 << std::endl;

	try {
		std::cout << "Accessing a valid index: " << intArray[0] << std::endl;
		std::cout << "Accessing a valid index: " << intArray[5] << std::endl;
		std::cout << "Accessing an valid index: " << intArray[SIZE - 1] << std::endl;
		std::cout << "Accessing an invalid index: " << intArray[SIZE] << std::endl;
	} catch ( Array< int >::OutOfBoundsException& e ) {
		std::cout << "\033[31mError: \033[0m" << e.what() << std::endl;
	}

	std::cout << "-----------------------------------------------------" << std::endl;

	return ( 0 );
}