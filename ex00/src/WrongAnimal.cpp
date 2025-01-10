/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:43:20 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 17:53:05 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

// Constructor
WrongAnimal::WrongAnimal()
{
	std::cout << "(WrongAnimal) Default constructor called." << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "(WrongAnimal) Copy constructor called." << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "(WrongAnimal) Destructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "(WrongAnimal) WrongAnimal Class instance does not make sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string name)
{
	this->_type = name;
}
