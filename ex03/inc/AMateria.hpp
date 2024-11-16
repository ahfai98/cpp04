/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:11:58 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 20:00:22 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &src);
		virtual	~AMateria();
		virtual AMateria &operator=(const AMateria &src);

		const std::string &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void	use(ICharacter &target);
};

#endif
