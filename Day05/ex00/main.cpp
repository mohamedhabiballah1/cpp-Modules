/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:30:23 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/02 11:45:20 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try {
        Bureaucrat b("Bureaucrat", 151);
        b.decrementGrade();
        std::cout << b << std::endl;
    } catch (std::exception &e) {
        std::cout << "Grade out of range, " << e.what() << std::endl;
        return (0);
    }
    return (0);
}