/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:43:20 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 15:50:25 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

// Constructor
WrongAnimal::WrongAnimal()
{
	std::cout << "(WrongAnimal) Default constructor called." << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "(WrongAnimal) Copy constructor called." << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "(WrongAnimal) Destructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "(WrongAnimal) Default WrongAnimal Class instance does not make sounds." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string name)
{
	this->_type = name;
}