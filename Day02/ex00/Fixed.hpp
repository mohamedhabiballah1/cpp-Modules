/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:11:03 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/03 11:39:47 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<string>

class Fixed {
    private:
        int value;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(Fixed &other);
        Fixed &operator=(Fixed &other);
        int getRawBits() const ;
        void    setRawBits(const int raw);
        ~Fixed();
};

#endif