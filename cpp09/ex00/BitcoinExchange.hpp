/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:34:16 by epraduro          #+#    #+#             */
/*   Updated: 2024/03/12 14:49:59 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <cstring>
#include <stdexcept>
#include <sstream>
#include <algorithm>

class BitcoinExchange {

	private:

		std::map<std::string, double> map;
	
	public:

		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);

		class Exception_custom : public std::exception {
			private:
				std::string msg;
			public:
				Exception_custom(const std::string& msg);
				virtual ~Exception_custom() throw();
				const char* what() const throw(); 
		};
		
		/*--------Converters-------*/
		std::string	intToChar(int number);
		int		convertToInt(std::string const &str);
		double	convertToDouble(std::string const &str);
		
		/*-------Format Checkers--------*/
		double	checkDateBD(std::string str);
		int is_digit(const std::string str);
		bool onlyspaces(const std::string& chaine);
		bool	goodDate(std::string const &date);
		
		/*-------Main Functions-------*/
		std::map<std::string, double> data(void);
		void	input(std::string str);
};