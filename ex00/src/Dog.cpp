/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:16:51 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 15:58:37 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Constructor
Dog::Dog()
{
	std::cout << "(Dog) Default constructor called." << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog& src): Animal(src)
{
	std::cout << "(Dog) Copy constructor called." << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "(Dog) Destructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
	if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "(Dog) Woof!" << std::endl;
}
