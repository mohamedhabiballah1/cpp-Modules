/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:50:21 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/25 14:09:29 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

    int hordeSize = 10;
    std::string hordeName = "HordeZombie";

    Zombie* horde = zombieHorde(hordeSize, hordeName);
    for (int i = 0; i < hordeSize; i++) {
        if (&horde[i])
            horde[i].announce();
    }
    delete[] horde;
    return 0;
}
