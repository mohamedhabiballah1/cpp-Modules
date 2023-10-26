/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:56:29 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/21 16:13:36 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    numContacts = 0;
    contactNumber = 0;
}

PhoneBook::~PhoneBook() {
    return ;
}

bool PhoneBook::isFull() {
    if (contactNumber == 8) {
        return true;
    } else {
        return false;
    }
}

bool onlyDigits(std::string &str) {
    int i = 0;

    while(str[i]) {
        if (!std::isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}

std::string readInput(std::string name) {
    std::string ret;
    std::cout << "Enter Your " << name << " :";
    std::getline(std::cin, ret);
    if (std::cin.eof())
        exit(1);
    return ret;
}

bool isJustSpaces(std::string str) { 
    for (size_t i = 0; i < str.length(); i++){
        if (str[i] != ' ' && str[i] != '\t')
            return false;
    }
    return true;
}

void PhoneBook::addContact() {

    if (isFull()) {
        contactNumber = 0;
    }
    std::string first, last, nick, phone, secret;
    first = readInput("First Name");
    while (first.empty() || isJustSpaces(first)) {
        std::cout << "Invalid First Name, Please try again!" << std::endl;
        first = readInput("First Name");
    }
    last = readInput("Last Name");
    while (last.empty() || isJustSpaces(last)) {
        std::cout << "Invalid Last Name, Please try again!" << std::endl;
        last = readInput("Last Name");
    }
    nick = readInput("Nick Name");
    while (nick.empty() || isJustSpaces(nick)) {
        std::cout << "Invalid Nick Name, Please try again!" << std::endl;
        nick = readInput("Nick Name");
    }
    phone = readInput("Phone Number");
    while (phone.empty() || !onlyDigits(phone) || isJustSpaces(phone)){
        std::cout << "Invalid Phone Number, Please try again!" << std::endl;
        phone = readInput("Phone Number");
    }
    secret = readInput("Darkest Secret");
    while (secret.empty() || isJustSpaces(secret)) {
        std::cout << "Invalid Darkest Secret, Please try again!" << std::endl;
        secret = readInput("Darkest Secret");
    }
    contacts[contactNumber++].setContactInfo(first, last, nick, phone, secret);
    std::cout << "Contact added successfully!" << std::endl;
    numContacts++;
}

void    PhoneBook::searchContact() {

    if (numContacts == 0) {
        std::cout << "PhoneBook is empty. ADD contact first" << std::endl;
        return ;
    } 
    std::cout << "Contacts in Phonebook:" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << std::setw(10) <<  "Index" << " | " << std::setw(10) << "First Name" << " | " << std::setw(10) << "Last name" << " | " << std::setw(10) << "Nick Name" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    int i = 0;
    while (i < numContacts && i < 8) {
        std::string fName = contacts[i].getFirstName();
        std::string lName = contacts[i].getLastName();
        std::string nName = contacts[i].getNickName();

        if (fName.length() > 10) {
            fName = fName.substr(0, 9) + ".";
        } if (lName.length() > 10) {
            lName = lName.substr(0, 9) + ".";
        } if (nName.length() > 10) {
            nName = nName.substr(0, 9) + ".";
        }
        std::cout << std::setw(10) << i << " | "<< std::setw(10) <<  fName << " | " << std::setw(10) << lName << " | " << std::setw(10) << nName << std::endl;
        i++;
    }
    std::cout << "---------------------------------------------------" << std::endl;
    int index;
    std::string indexString;
    std::cout << "Enter the index of the contact to display" << std::endl;
    std::getline(std::cin, indexString);
    if (std::cin.eof())
        exit (1);
    std::istringstream(indexString) >> index;
    if (!onlyDigits(indexString) || indexString.empty()) {
        std::cout << "Invalid index" << std::endl;
    } else if (index >= 0 && index < numContacts) {
        contacts[index].displayContactInfo();
    } else {
        std::cout << "Invalid index, No Contact found" << std::endl;
    }
}