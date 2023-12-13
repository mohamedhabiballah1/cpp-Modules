/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:15:39 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/20 10:16:17 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
    
    public :
        Cure();
        Cure(std::string const &type);
        Cure(const Cure &other);
        Cure &operator=(const Cure &other);
        ~Cure();

        AMateria *clone() const;
        void use(ICharacter& target);
};

#endif