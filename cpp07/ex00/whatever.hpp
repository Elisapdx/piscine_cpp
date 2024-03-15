/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:48:42 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/19 16:18:34 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void swap(T & a, T & b)
{
	T c;

	c = a;
	a = b;
	b = c;
}

template <typename T>
T min(T a, T b)
{
	if (a == b)
		return (b);
	else if (a > b)
		return (b);
	else
		return (a);
}

template <typename T>
T max(T a, T b)
{
	if (a == b)
		return (b);
	else if (a > b)
		return (a);
	else
		return (b);
}