/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:16:51 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 18:00:39 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Constructor
Cat::Cat()
{
	std::cout << "(Cat) Default constructor called." << std::endl;
	this->_type = "Cat";
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

Cat::Cat(const Cat &src): Animal(src)
{
	std::cout << "(Cat) Copy constructor called." << std::endl;
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

Cat::~Cat()
{
	delete (this->brain);
	std::cout << "(Cat) Destructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "(Cat) Assignment operator called." << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		*this->brain = *(src.brain);
	}
	return (*this);
}

/* Example of shallow copy
Cat &Cat::operator=(const Cat &src)
{
	if (this == &src)
		return (*this);  // Check for self-assignment

	// Shallow copy: copy the pointer (no new memory allocated)
	this->_type = src._type;
	this->brain = src.brain;  // Just copy the pointer, no new Brain is created
	return (*this);
}*/

void	Cat::makeSound() const
{
	std::cout << "(Cat) Meow!" << std::endl;
}

void	Cat::setBrainIdea(int i, const std::string &newIdea)
{
	return (this->brain->setIdea(i, newIdea));
}

/* Getter function for Brain's idea of Cat class */
const std::string&	Cat::getBrainIdea(int i) const
{
	return (this->brain->getIdea(i));
}
