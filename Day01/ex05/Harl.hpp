/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:23:33 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/19 12:48:58 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <fstream>
#include <string>

class Harl {
    private :
        void    debug();
        void    info();
        void    warning();
        void    error();
    public :
        void    complain(std::string level);
};

#endif