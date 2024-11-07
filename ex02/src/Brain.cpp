/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:16:51 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 17:53:36 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

// Constructor
Brain::Brain()
{
	std::cout << "(Brain) Default constructor called." << std::endl;
}

Brain::Brain(const Brain& src)
{
	std::cout << "(Brain) Copy constructor called." << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "(Brain) Destructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& src)
{
	std::cout << "(Brain) Assignment operator called." << std::endl;
	if (this == &src)
		return (*this);
	for (int i = 0; i < IDEAS_NO; ++i)
		this->setIdea(i, src.getIdea(i));
	return (*this);
}

void	Brain::setIdea(int i, const std::string& newIdea)
{
	if (i < 0 || i >= IDEAS_NO)
		return ;
	this->_ideas[i] = newIdea;
}

/* Getter funcitno for idea of Brain class */
const std::string&	Brain::getIdea(int i) const
{
	if (i < 0 || i >= IDEAS_NO)
		return (this->_ideas[0]);
	return (this->_ideas[i]);
}