/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:38:02 by elisa             #+#    #+#             */
/*   Updated: 2023/10/23 12:55:55 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

/*
verifier que le fichier est un fichier
verifier que la premiere chaine exist
ouvrire le fichier
trouver une occurence de la chaine dans le fichier
stocker le resultat dans un nouveau fichier du meme nom avec l extention .replace
fermer le fichier
*/

int ft_error(std::string error, std::string arg)
{
	if (!arg.empty())
		std::cout << error << arg << std::endl;
	else
		std::cout << error << std::endl;
	return(0);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac != 4)
		return (ft_error("Usage: ./sed <filename> <string1> <string2>", ""));

	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string filename = av[1];
	std::ifstream fd(filename);  // ouvre le fichier
	std::stringstream buf;
	std::string str;
	
	if (!fd.good())
		return (ft_error("Error: Unable to open the file", av[1]));
	if (s1.empty())
		return (ft_error("Error: String1 is empty", ""));
	
	buf << fd.rdbuf();
	str = buf.str();   // lis le fichier 

	size_t m;
	while ((m = str.find(s1)) != std::string::npos) // m prend la valeur de la position de l'occurence tant que la chaine existe
		str.erase(m, s1.length()).insert(m, s2); // efface l'occurence a la position m et de sa taille pour le remplacer par le mot de la s2
	
	std::ofstream out(filename + ".replace");  // cree un nouveau fichier et ajoute du suffixe .replace

	if (!fd.good())
		return (ft_error("Error: Unable to open the file", filename + ".replace"));   // verif que le nouveau fichier s'ouvre
	out << str;   // depose les modifications dans le nouveau fichier
	out.close();
	return (0);
}