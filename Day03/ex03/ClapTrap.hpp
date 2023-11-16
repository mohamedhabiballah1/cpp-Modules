/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:43:51 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/09 16:42:47 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<string>
#include<iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int HitPoints;
        int EnergyPoints;
        int AttackDamage;        
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &other);

        virtual void attack(const std::string& target);
        virtual std::string &getName();
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    setName(std::string &name);
        virtual ~ClapTrap();
};

#endif