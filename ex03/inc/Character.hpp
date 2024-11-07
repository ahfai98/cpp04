/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:11:58 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 20:23:19 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# define MAX_INV_SLOT 4

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria	*_inventory[MAX_INV_SLOT];
	
	public:
		Character();
		Character(const std::string& name);
		Character(const Character& src);
		virtual	~Character();
		Character& operator=(const Character& src);

		virtual const std::string& getName() const;
		const AMateria *getMateria(int i) const;
		virtual void	equip(AMateria *m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter &target);
};

#endif
