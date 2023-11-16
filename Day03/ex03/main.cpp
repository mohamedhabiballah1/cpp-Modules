/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:43:56 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/15 10:55:06 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    ScavTrap Strap("Scav");
    DiamondTrap diamond("DM_trap");
    Strap.attack("enemy");
    diamond.attack("enemy");
    diamond.beRepaired(10);
    diamond.whoAmI();
    return 0;
}
