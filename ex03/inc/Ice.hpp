/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:30:13 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 20:31:01 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		/* Orthrodox canonical form */
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &src);
		virtual				~Ice();
		virtual Ice& operator=(const Ice& src);

		/* Member functions */
		virtual	AMateria	*clone() const;
		virtual	void		use(ICharacter& target);
	protected:
		std::string			_type;
};

#endif