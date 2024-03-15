/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:36:30 by epraduro          #+#    #+#             */
/*   Updated: 2024/03/11 14:50:18 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


//*
int main()
{

	std::cout << "\033[36m  MutantStack with std::stack  \033[0m" << std::endl;
	
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it; 
	}
	std::stack<int> s(mstack); 
	return 0;
}
//*/


/*
int main(void)
{
	
	std::cout << "\033[35m  MutantStack with std::list  \033[0m" << std::endl;
	
	std::list<int> mstack;

	mstack.push_back(5);	// Ajout d'un élément à la fin du tableau.
	mstack.push_back(17);

	std::cout << mstack.back() << std::endl;

	mstack.pop_back();		// Suppression de la dernière case du tableau

	std::cout << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	return 0;
}
*/