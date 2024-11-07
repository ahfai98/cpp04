/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:16:51 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 15:58:01 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Constructor
Cat::Cat()
{
	std::cout << "(Cat) Default constructor called." << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat& src): Animal(src)
{
	std::cout << "(Cat) Copy constructor called." << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "(Cat) Destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "(Cat) Meow!" << std::endl;
}
