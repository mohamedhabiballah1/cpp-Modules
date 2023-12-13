/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:54:10 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/20 10:32:40 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;

class Character : public ICharacter {
    private :
        std::string name;
        AMateria * inventory[4];
    public :
        Character();
        Character(std::string name);
        Character(const Character &other);
        Character &operator=(const Character &other);
        ~Character();

        std::string const & getName() const;
        void        equip(AMateria* m);
        void        unequip(int idx);
        void        use(int idx, ICharacter& target);
};

#endif