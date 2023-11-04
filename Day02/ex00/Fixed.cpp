/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:11:05 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/03 11:40:06 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default Constructor Called" << std::endl;
    value = 0;
}

Fixed::Fixed(Fixed &other){
    std::cout << "Copy Constructor Called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(Fixed &other) {
    if (this != &other) {
        std::cout << "Copy Assignment Operator Called" << std::endl;
        value = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor Called" << std::endl;
}

int    Fixed::getRawBits() const  {
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void    Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}