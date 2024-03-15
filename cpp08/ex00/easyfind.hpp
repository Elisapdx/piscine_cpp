/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:54:09 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/17 14:20:30 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>

template <typename T>
int	easyfind(T a, int b)
{
	int i = 0;
	
	while (a[i])
	{
		if (a[i] == b)
			return (i);
		i++;
	}
	return (-1);
}