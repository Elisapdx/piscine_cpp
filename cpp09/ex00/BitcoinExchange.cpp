/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:34:19 by epraduro          #+#    #+#             */
/*   Updated: 2024/03/13 12:50:08 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::Exception_custom::Exception_custom(const std::string& msg): msg(msg) {}

BitcoinExchange::Exception_custom::~Exception_custom() throw(){}

const char* BitcoinExchange::Exception_custom::what() const throw() { return msg.c_str(); }

BitcoinExchange::BitcoinExchange() {
	
}

BitcoinExchange::~BitcoinExchange() {
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
	*this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &copy) {
	if (this == &copy)
		return (*this);
	return (*this);
}

int BitcoinExchange::convertToInt(std::string const &str) {
	int result;
	std::istringstream iss(str);
	iss >> result;
	return result;
}

double BitcoinExchange::convertToDouble(std::string const &str) {
	double result;
	std::istringstream iss(str);
	iss >> result;
	return result;
}

bool	BitcoinExchange::goodDate(std::string const &date) {
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return false;

	int	year = convertToInt(date.substr(0, 4));
	int	month = convertToInt(date.substr(5, 2));
	int	day = convertToInt(date.substr(8, 2));
	int	daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (year < 2009 || year > 2024 || month < 1 \
			|| month > 12 || day < 1 || day > 31)
		return false;
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		daysInMonths[1] = 29;
	if (day > daysInMonths[month - 1])
		return false;

	return true;
}

std::string BitcoinExchange::intToChar(int number) {
	
	std::stringstream ss;
	ss << number;
	std::string str = ss.str();
	return str;
}

double BitcoinExchange::checkDateBD(std::string date)
{
	std::map<std::string, double>::iterator it = this->map.find(date);	// recherche de la cle exacte 
	if (it != this->map.end())
		return it->second;		// retourne la valeur correspondante

	if (this->map.empty() || this->map.begin()->first > date)
		return 0;		// si la map est vide ou si la clé est inférieure à toutes les clés dans la map
	// it = std::prev(this->map.upper_bound(date));

	return it->second;		// std::map::upper_bound pour trouver le premier élément dont la clé est strictement supérieure à la clé donnée et std::prev pour obtenir l'élément précédent dans la map.
}

int BitcoinExchange::is_digit(const std::string str) {
	for (int i = 0; i < (int) str.length(); i++)
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != '\n' && str[i] != '-' && str[i] != '\0' && str[i] != ' ')
			return (0);
	return (1);
}

std::map<std::string, double> BitcoinExchange::data() {
	
	std::string line;
	std::fstream file;
	std::string date;
	std::string rate;

	std::map<std::string, double> data;
	file.open("data.csv");
	std::getline(file, line);
	
	if (line.compare("date,exchange_rate") != 0)
	{
		std::cout << "Error: wrong format (' " << line << " ')." << std::endl;
		return data;
	}
	while (getline(file, line)) {
		size_t sep = line.find(',');
		if (sep == std::string::npos)
			std::cout << "Error: bad input => " << line << std::endl;
		date = line.substr(0, sep);
		rate = line.substr(sep + 1);
		if (date.empty() || rate.empty())
			std::cout << "Error: date.empty() || rate.empty() " << line << std::endl;
		if (goodDate(date) == false)
			std::cout << "Error: !goodDate(date) " << date << std::endl;
		if (!is_digit(rate))
			std::cout << "Error: rate isn't digital " << rate << std::endl;
		data.insert(std::pair<std::string, double>(date, convertToDouble(rate)));
	}
	file.close();
	return data;
}

bool BitcoinExchange::onlyspaces(const std::string& chaine) {
	size_t i = 0;
	while (i < chaine.length()) {
		if (chaine[i] != ' ') {
			return false; // Si un caractère n'est pas un espace, retourne false
		}
		i++;
	}
	return true; // Si tous les caractères sont des espaces, retourne true
}

void	BitcoinExchange::input(std::string str) {
	
	std::string line;
	std::fstream file;
	std::string date;
	std::string value;
	double result;

	this->map = data();
	
	file.open(str.c_str());
	if (!file)
	{
		std::cout << "Error: could not open file." << line << std::endl;
		return;
	}

	std::getline(file, line);
	if (line.compare("date | value") != 0)
	{
		std::cout << "Error: wrong format ('" << line << "')."<< std::endl;
		return;
	}

	while (std::getline(file, line)) {
		size_t sep = line.find('|');
		date = line.substr(0, sep - 1);
		value = line.substr(sep + 1);
		try {
			double v = convertToDouble(value);
			if (sep == std::string::npos || (date.empty() || value.empty()) || !goodDate(date) || !is_digit(value) || onlyspaces(value) == true)
				throw BitcoinExchange::Exception_custom("Error: bad input => " + line);
			if (v < 0)
				throw BitcoinExchange::Exception_custom("Error: not a positive number.");
			if (v > 1000)
				throw BitcoinExchange::Exception_custom("Error: too large a number.");
			result = checkDateBD(date);
			std::cout << date << " => " << value << " = " << result * v << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	file.close();
}
