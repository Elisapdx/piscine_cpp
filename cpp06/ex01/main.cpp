/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:59:50 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/20 15:14:57 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data		data;
	Data		*ptr;
	uintptr_t	raw;

	data.name = "that works";

	std::cout << "data.name: " << data.name << std::endl;
	
	raw = Serializer::serialize(&data);
	ptr = Serializer::deserialize(raw);
	
	std::cout << "raw: " << raw << std::endl;
	std::cout << "ptr->name: " << ptr->name << std::endl;

	return 0;
}