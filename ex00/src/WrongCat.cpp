/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:16:51 by jyap              #+#    #+#             */
/*   Updated: 2024/11/16 14:42:49 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

// Constructor
WrongCat::WrongCat()
{
	std::cout << "(WrongCat) Default constructor called." << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src): WrongAnimal(src)
{
	std::cout << "(WrongCat) Copy constructor called." << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "(WrongCat) Destructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "(WrongCat) Meow!" << std::endl;
}
