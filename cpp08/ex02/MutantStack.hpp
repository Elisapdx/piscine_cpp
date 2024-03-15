/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:31:36 by epraduro          #+#    #+#             */
/*   Updated: 2024/03/11 14:52:41 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

# include <stack>
# include <list>
# include <deque>
#include <iostream>
#include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		
		MutantStack(): std::stack<T>() {};
		MutantStack(MutantStack const & src) : std::stack<T>(src) {};
		virtual ~MutantStack() {};

		typedef typename std::deque<T>::iterator iterator;		// std::deque est un tableau auquel on peut ajouter des éléments aux deux extrémités
		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}

};

#endif
