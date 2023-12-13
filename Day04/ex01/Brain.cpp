/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:09:55 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/11/27 10:52:09 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Default Constructor is Called" << std::endl ;
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain Copy Constructor is Called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other) {
    if (this != &other) {
        std::cout << "Brain Copy Assignment is Called" << std::endl;
        for (size_t i = 0; i < 100; i++) {
            this->array[i] = other.array[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain Destructor is Called" << std::endl;
}