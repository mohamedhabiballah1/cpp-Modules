/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:14:15 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/04 14:17:22 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : virtual public ClapTrap
{
    public:
        FlagTrap();
        FlagTrap(std::string name);
        FlagTrap(const FlagTrap &other);
        FlagTrap &operator=(const FlagTrap &other);
        void highFivesGuys(void);
        ~FlagTrap();
};

#endif