/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:41:08 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/20 15:12:44 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

typedef unsigned long uintptr_t;

struct Data {
	
	std::string name;
	
};

class Serializer {

	public :

		Serializer();
		~Serializer();
		Serializer(const Serializer &copy);
		Serializer& operator=(const Serializer &copy);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};