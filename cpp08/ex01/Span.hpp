/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:32:24 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/17 21:13:14 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Span {

	private:

		unsigned int _N;
		unsigned int _size;
		int* _tab;

	public:

		Span(unsigned int nb);
		~Span();
		Span(const Span &copy);
		Span &operator=(const Span &copy);

		void	addNumber(int nb);
		int		shortestSpan();
		int		longestSpan();

		class NotMoreAddNumber : public std::exception
		{
			public:
				const char *what() const throw() {
					return ("No more adding numbers");
				}
		};

		class LowDistance : public std::exception
		{
			public:
				const char *what() const throw() {
					return ("Distance is too short");
				}
		};
};