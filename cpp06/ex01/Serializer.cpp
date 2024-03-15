/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:53:54 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/20 14:59:44 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	
}

Serializer::~Serializer() {
	
}

Serializer::Serializer(const Serializer &copy) {
	*this = copy;
}

Serializer& Serializer::operator=(const Serializer &copy) {
	if (this == &copy)
		return (*this);
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
	return(reinterpret_cast<Data *>(raw));
}