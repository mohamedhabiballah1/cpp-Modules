/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:31:38 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/02 15:12:55 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try {
        Bureaucrat  *bureaucrat = new Bureaucrat("Bureaucrat", 7);
        Form        *form = new PresidentialPardonForm("Form");
        Form        *form2 = new RobotomyRequestForm("Form2");
        Form        *form3 = new ShrubberyCreationForm("Chajarat_l3a2ila");

        std::cout << *bureaucrat << std::endl;
        std::cout << *form << std::endl;
        std::cout << *form2 << std::endl;
        std::cout << *form3 << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Sign Form section " << std::endl;
        bureaucrat->signForm(*form);
        bureaucrat->signForm(*form2);
        bureaucrat->signForm(*form3);

        std::cout << "----------------------------------------" << std::endl;
        std::cout << *bureaucrat << std::endl;
        std::cout << *form << std::endl;
        std::cout << *form2 << std::endl;
        std::cout << *form3 << std::endl;

        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Execute Form section " << std::endl;
        bureaucrat->executeForm(*form);
        bureaucrat->executeForm(*form2);
        bureaucrat->executeForm(*form3);
    
        delete bureaucrat;
        delete form;
        delete form2;
        delete form3;
    } catch(const std::exception& e) {
        std::cerr << "Grade out of range " << '\n';
    }
    return (0);
}