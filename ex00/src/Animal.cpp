/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:16:51 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 17:52:58 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Constructor
Animal::Animal()
{
	std::cout << "(Animal) Default constructor called." << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal &src)
{
	std::cout << "(Animal) Copy constructor called." << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "(Animal) Destructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal Class instance does not make sound." << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}
