/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:52:54 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/23 14:08:16 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    HumanB::name = name;
    weaponType = nullptr;
}

void    HumanB::setWeapon(Weapon &weapons) {
    weaponType = &weapons;
}

void    HumanB::attack() {
    if (HumanB::weaponType) {
        std::cout << name << " attack with their " << weaponType->getType() << std::endl;
    }
    else {
        std::cout << name << " attacks" << std::endl;
    }
}