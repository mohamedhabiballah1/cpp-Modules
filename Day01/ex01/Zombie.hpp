/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:30:23 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/17 10:48:05 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<string>
#include<iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        void setName(std::string name);
        void announce();
        ~Zombie();
};

Zombie* zombieHorde(int i, std::string name);
#endif