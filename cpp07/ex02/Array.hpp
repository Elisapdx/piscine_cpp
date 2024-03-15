/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:07:43 by epraduro          #+#    #+#             */
/*   Updated: 2024/03/11 13:42:20 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <class T>
class Array {
	
	private:

	T* _array;
	unsigned int _size;

	public:
	
	Array(): _array( new T() ), _size(0) {};
	
	Array(unsigned int nb) : _array( new T[nb] ), _size(nb) {};
	
	Array(const Array &copy): _array( new T[copy.size()]), _size( copy.size() ) {
		unsigned int i = 0;
		while (i < _size)
		{
			_array[i] = copy._array[i];
			i++; 
		}
	};
	
	~Array() { delete [] _array; }
	
	Array &operator=(const Array &copy) {
		if (this != &copy)
		{
			delete [] _array;
			_array = new T[copy.size()];
			_size = copy._size;
			unsigned int  i = 0;
			while (i < _size)
			{
				_array[i] = copy._array[i];
				i++;
			}
		}
		return *this;
	}
	
	unsigned int size() const { return _size; }

	T& operator[]( unsigned int i ) const {
		if ( i >= _size )
			throw OutOfBoundsException();
		return _array[i];
	}

	class OutOfBoundsException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Index is out of bounds";}
	};
};

template < typename T >
std::ostream& operator<<( std::ostream& out, const Array<T>& array ) {
	unsigned int i = 0;
	while (i < array.size())
	{
		out << array[i] << " ";
		i++;
	}
	return out;
}