/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:43:56 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/15 10:35:07 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main() {
    ClapTrap c_Trap("C_TRAP");
    ScavTrap scav("S_TRAP");
    FlagTrap ftrap("F_TRAP");

    scav.attack(c_Trap.getName());
    ftrap.attack(c_Trap.getName());
    return 0;
}
