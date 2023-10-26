/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:37:01 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/19 10:42:22 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>


class Contact {
    private :
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public :
        Contact();
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        void    displayContactInfo();
        void    setContactInfo(const std::string first, const std::string last, const std::string nick, const std::string phone, const std::string secret);
        ~Contact();
};

#endif