/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:32:42 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/25 12:43:53 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int i, std::string name) {

    if (i <= 0)
        return NULL;
    int n = 0;
    Zombie* horde = new Zombie[i];
    while (n < i) {
        horde[n].setName(name);
        n++;
    }
    return horde;
}