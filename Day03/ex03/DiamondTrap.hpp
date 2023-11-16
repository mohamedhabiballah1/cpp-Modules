/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:11:49 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/09 16:42:54 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "FlagTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FlagTrap, public ScavTrap {
    private :
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap &operator=(const DiamondTrap &other);
        ~DiamondTrap();
        std::string &getName();
        void        setName(std::string &name);
        void        whoAmI();
        void        attack(const std::string &target);
};

#endif