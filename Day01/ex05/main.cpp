/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:48:55 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/23 14:52:59 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(int argc, char *argv[])
{

    Harl level;
    std::string command;
    if (argc == 2) {
        command = argv[1];
        level.complain(command);
    } else {
        std::cout << "Missing Some Arguments!!" << std::endl;
    }
    return 0;
}
