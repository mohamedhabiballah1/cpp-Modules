/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:52:53 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/25 14:11:02 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapons) : weaponType(weapons) {
    HumanA::name = name;
}

void    HumanA::attack(){
    std::cout << name << " attack with their " << weaponType.getType() << std::endl;
}
