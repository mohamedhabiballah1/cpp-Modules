/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:43:56 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/06 17:18:12 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap claptrap("CL4P-TP");

    claptrap.attack("Enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    return 0;
}