/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:30:13 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 19:27:30 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
# define FIRE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Fire : public AMateria
{
	public:
		Fire();
		Fire(std::string const &type);
		Fire(const Fire &src);
		virtual ~Fire();
		Fire &operator=(const Fire &src);

		/* Member functions */
		virtual	AMateria *clone() const;
		virtual	void use(ICharacter &target);
	protected:
		std::string			_type;
};

#endif
