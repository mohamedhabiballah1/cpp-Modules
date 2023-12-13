/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:57:23 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/20 10:16:26 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string const &type);
        Ice(const Ice &other);
        Ice &operator=(const Ice &other);
        ~Ice();

        AMateria *clone() const;
        void use(ICharacter& target);
};

#endif