/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RNP.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:53:31 by epraduro          #+#    #+#             */
/*   Updated: 2024/03/12 19:24:56 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib> // Pour la fonction atoi

class RNP {

	private:

		static bool isFirstToken;

	public:

		RNP();
		~RNP();
		RNP(const RNP &copy);
		RNP &operator=(const RNP &copy);

		class Exception_custom : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		
		int check_spaces(const std::string str);
		int evaluerExpressionRPN(const std::string& expression);
};