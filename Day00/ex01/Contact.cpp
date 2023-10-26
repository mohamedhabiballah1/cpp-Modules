/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:35:04 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/21 12:54:31 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact () {
    return ;
}

Contact::~Contact () {
    return;
}

std::string Contact::getFirstName() {
    return firstName ;
}

std::string Contact::getLastName() {
    return lastName ;
}

std::string Contact::getNickName() {
    return nickName ;
}

void    Contact::displayContactInfo() {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nick Name: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

void    Contact::setContactInfo(const std::string first, const std::string last, const std::string nick, const std::string phone, const std::string secret) {
    firstName = first;
    lastName = last;
    nickName = nick;
    phoneNumber = phone;
    darkestSecret = secret;
}
