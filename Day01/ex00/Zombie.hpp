/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:50:08 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/21 14:17:41 by mhabib-a         ###   ########.fr       */
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
        Zombie(std::string name);
        void announce();
        ~Zombie();
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name) ;
#endif