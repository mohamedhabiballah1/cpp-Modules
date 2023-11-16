/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:43:56 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/15 10:23:57 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ClapTrap cTrap("Trap");
    ScavTrap Strap("Scav");

    Strap.attack(cTrap.getName());
    return 0;
}
