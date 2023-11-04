/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:11:05 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/03 11:40:40 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default Constructor Called" << std::endl;
}

std::ostream &operator<<(std::ostream &op, const Fixed &value) {
    op << value.toFloat();
    return op;
}

Fixed::Fixed(const int integerValue) {
    std::cout << "Integer Constructor Called" << std::endl;
    value = integerValue * (1 << fractionalBits);
}

Fixed::Fixed(const float floatValue) {
    std::cout << "Float Constructor Called" << std::endl;
    value = (int)(std::roundf(floatValue * (1 << fractionalBits)));
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy Constructor Called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
    if (this != &other) {
        std::cout << "Copy Assignment Operator Called" << std::endl;
        value = other.value;
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

float    Fixed::toFloat() const {
    return (float)(value) / (1 << fractionalBits);
}

int    Fixed::toInt() const {
    return value / (1 << fractionalBits);
}
