/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:11:58 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 18:03:13 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal& src);
		Animal& operator=(const Animal& src);
		virtual ~Animal();
		virtual void	makeSound() const = 0;
		std::string		getType() const;
};

#endif
