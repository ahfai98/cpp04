/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:11:58 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 19:54:43 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# define MAX_INV_SLOT 4
# define MAX_FLR_SPACE 10

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria	*_inventory[MAX_INV_SLOT];
		AMateria	*_floor[MAX_FLR_SPACE];
		static unsigned int _floor_mat_count;
	
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &src);
		~Character();
		Character &operator=(const Character &src);

		const std::string &getName() const;
		const AMateria *getMateria(int i) const;
		const AMateria *getFloorMateria(int i) const;
		static unsigned int getFloorMatCount();
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

#endif
