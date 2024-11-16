/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:16:51 by jyap              #+#    #+#             */
/*   Updated: 2024/11/16 15:13:16 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Constructor
Dog::Dog()
{
	std::cout << "(Dog) Default constructor called." << std::endl;
	this->_type = "Dog";
	try
	{
		this->brain = new Brain();
	}
	catch (const std::exception &error)
	{
		std::cerr << error.what() << std::endl;
		throw (error);
	}
}

Dog::Dog(const Dog &src): Animal(src)
{
	std::cout << "(Dog) Copy constructor called." << std::endl;
	try
	{
		brain = new Brain();
	}
	catch (const std::exception &error)
	{
		std::cerr << error.what() << std::endl;
		throw (error);
	}
	*this = src;
}

Dog::~Dog()
{
	std::cout << "(Dog) Destructor called." << std::endl;
	delete (this->brain);
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "(Dog) Assignment operator called." << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src._type;
	*this->brain = *(src.brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "(Dog) Woof!" << std::endl;
}

void	Dog::setBrainIdea(int i, const std::string &newIdea)
{
	return (this->brain->setIdea(i, newIdea));
}

/* Getter function for Brain's idea of Dog class */
const std::string&	Dog::getBrainIdea(int i) const
{
	return (this->brain->getIdea(i));
}