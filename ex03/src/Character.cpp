/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:16:51 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 19:10:40 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

// Constructor
Character::Character()
{
	std::cout << "(Character) Default constructor called." << std::endl;
	this->_name = "Default";
	this->_floor_mat_count = 0;
	for (int i = 0; i < MAX_INV_SLOT; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < MAX_FLR_SPACE; i++)
		_floor[i] = NULL;
}

Character::Character(std::string const &name)
{
	this->_name = name;
	this->_floor_mat_count = 0;
	std::cout << "(Character) " << this->_name << " created." << std::endl;
	for (int i = 0; i < MAX_INV_SLOT; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < MAX_FLR_SPACE; i++)
		_floor[i] = NULL;
}

Character::Character(const Character &src)
{
	std::cout << "(Character) Copy constructor called." << std::endl;
	*this = src;
}

Character::~Character()
{
	std::cout << "(Character) Destructor called." << std::endl;
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete(_inventory[i]);
			_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < MAX_FLR_SPACE; i++)
	{
		if (_floor[i] != NULL)
		{
			delete(_floor[i]);
			_floor[i] = NULL;
		}
		else
			break;
	}
}

Character &Character::operator=(const Character &src)
{
	std::cout << "(Character) Assignment operator called." << std::endl;
	if (this == &src)
		return (*this);
	this->_name = src._name;
	this->_floor_mat_count = src._floor_mat_count;
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete(_inventory[i]);
			_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < MAX_FLR_SPACE; i++)
	{
		if (_floor[i] != NULL)
		{
			delete(_floor[i]);
			_floor[i] = NULL;
		}
		else
			break;
	}
	const AMateria *temp;
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		temp = src.getMateria(i);
		if (temp != NULL)
			_inventory[i] = temp->clone();
	}
	for (int i = 0; i < MAX_FLR_SPACE; i++)
	{
		temp = src.getFloorMateria(i);
		if (temp != NULL)
			_inventory[i] = temp->clone();
		else
			break;
	}
	return (*this);
}

const std::string &Character::getName() const
{
	return (this->_name);
}

/* Getter function for materia of Character class */
const AMateria	*Character::getMateria(int i) const
{
	if (i < 0 || i >= MAX_INV_SLOT)
		return (NULL);
	return (this->_inventory[i]);
}

const AMateria	*Character::getFloorMateria(int i) const
{
	if (i < 0 || i >= MAX_FLR_SPACE)
		return (NULL);
	return (this->_floor[i]);
}

unsigned int	Character::getFloorMatCount(void) const
{
	return (this->_floor_mat_count);
}

/* Equips materia in inventory if it exists, else do nothing */
void	Character::equip(AMateria *m)
{
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << m->getType() << " Materia equipped at Slot " << i << std::endl;
			break ;
		}
		else if (this->_inventory[i] == m)
		{
			std::cout << "This Materia has already been equipped." << std::endl;
			break ;
		}
	}
}

/* Unequips materia in inventory if it exists, else do nothing */
void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= MAX_INV_SLOT)
		std::cout << "Unequip failed: Invalid Slot ID." << std::endl;
	else if (this->_inventory[idx] == NULL)
		std::cout << "Unequip failed: Slot " << idx << " is empty." << std::endl;
	else if (this->_floor_mat_count >= MAX_FLR_SPACE)
	{
		std::cout << "Unequip failed: The Floor is filled with Materias." << std::endl;
	}
	else
	{
		this->_floor[this->_floor_mat_count] = this->_inventory[idx];
		this->_floor_mat_count++;
		std::cout << this->_inventory[idx]->getType() << " Materia at Slot " << idx << " was unequipped." << std::endl;
		this->_inventory[idx] = NULL;
		std::cout << "Number of Materias on the floor: " << this->_floor_mat_count << "/" << MAX_FLR_SPACE << std::endl;
	}
}

/* Use materia in inventory if it exists, else do nothing */
void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= MAX_INV_SLOT)
		std::cout << "Use Materia failed: Invalid Slot ID." << std::endl;
	else if (this->_inventory[idx] == NULL)
		std::cout << "Use Materia failed: Slot " << idx << " is empty." << std::endl;
	else
		this->_inventory[idx]->use(target);
}
