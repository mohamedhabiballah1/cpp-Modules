/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:11:03 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/03 11:40:23 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include <cmath>
#include<string>

class Fixed {
    private:
        int value;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int integerValue);
        Fixed(const float floatValue);
        Fixed &operator=(const Fixed &other);
        Fixed(const Fixed &other);
        int getRawBits() const ;
        void    setRawBits(const int raw);
        int toInt() const;
        float toFloat() const ;
        ~Fixed();
};

std::ostream &operator<<(std::ostream &op, const Fixed &value);

#endif