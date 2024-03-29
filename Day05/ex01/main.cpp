/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:30:48 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/02 11:45:59 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    try {
        Bureaucrat b1("B1", 150);
        Form f1("F1", 90, 160);
        std::cout << b1 << std::endl;
        std::cout << "Before f1 being signed "<< f1 << std::endl;
        b1.signForm(f1);
        std::cout << "After f1 being signed "<< f1 << std::endl;
    } catch (std::exception & e) {
        std::cout << "Grade out of range " << e.what() << std::endl;
    }
    
    try {
        Bureaucrat b2("B2", 150);
        Form f2("F2", 150, 150);

        std::cout << b2 << std::endl;
        std::cout << f2 << std::endl;
        b2.signForm(f2);
        std::cout << f2 << std::endl;
    } catch (std::exception & e) {
        std::cout << "Grade out of range " << e.what() << std::endl;
    }

    return (0);
}