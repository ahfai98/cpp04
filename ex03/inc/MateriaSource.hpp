/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:23:32 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 20:25:52 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "Character.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		/* Orthrodox canonical form */
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		virtual				~MateriaSource();
		MateriaSource& operator=(const MateriaSource& src);

		/* Member functions */
		const AMateria		*getMateria(int i) const;
		virtual void		learnMateria(AMateria *materia);
		virtual AMateria	*createMateria(std::string const& type);
	private:
		AMateria	*_inventory[MAX_INV_SLOT];
};

#endif
