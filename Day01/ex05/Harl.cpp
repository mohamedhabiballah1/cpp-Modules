/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:48:52 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/23 14:53:38 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug() {
    std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info() {
    std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning() {
    std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error() {
    std::cout <<"[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level) {

    int n = -1;
    void (Harl::*complainFunction)();
    
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (size_t i = 0; i < 4; i++)
    {
        if (levels[i] == level){
            n = i;
            break;
        }
    }
    
    switch (n) {
        case 0:
            complainFunction = &Harl::debug;
            break;
        case 1:
            complainFunction = &Harl::info;

        case 2:
            complainFunction = &Harl::warning;
            break;
        case 3:
            complainFunction = &Harl::error;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return;
    }
    (this->*complainFunction)();
}
