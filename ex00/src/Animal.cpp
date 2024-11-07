/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:16:51 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 15:50:05 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Constructor
Animal::Animal()
{
	std::cout << "(Animal) Default constructor called." << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal& src)
{
	std::cout << "(Animal) Copy constructor called." << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "(Animal) Destructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
	if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "(Animal) Default Animal Class instance does not make sounds." << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}