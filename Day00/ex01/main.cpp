/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:41:15 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/21 14:10:29 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    PhoneBook contacts;
    std::string command;

    while (1) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT) :";
        std::getline(std::cin, command);
        if (std::cin.eof()) {
            break ;
        } else if (command == "ADD"){
            contacts.addContact();
        } else if (command == "SEARCH") {
            contacts.searchContact();
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command, Please try again" << std::endl;
        }
    }
    return 0;
}
