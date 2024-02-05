/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:32:31 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/02 14:49:56 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern Default Constructor is called" << std::endl;
}

Intern::Intern(const Intern &other) {
    std::cout << "Intern Copy Constructor is called" << std::endl;
    *this = other;
}

Intern &Intern::operator=(const Intern &other) {
    if (this != &other) {

    }
    return *this;
}

Intern::~Intern() {
    std::cout << "Intern Default Destructor is called" << std::endl;
}

Form *makeShrubbery(std::string target) {
    Form *form = new ShrubberyCreationForm(target);
    return form;
}

Form *makePresidential(std::string target) {
    Form *form = new PresidentialPardonForm(target);
    return form;
}

Form *makeRobot(std::string target) {
    Form *form = new RobotomyRequestForm(target);
    return form;
}

Form *Intern::makeForm(std::string const &formName, std::string target) {
    typedef Form *(*formMaker)(std::string target);
    std::string array[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    formMaker funcArr[3] = {&makeShrubbery, &makeRobot, &makePresidential};

    for (int i = 0; i < 3; i++) {
        if (formName == array[i]) {
            std::cout << "Intern creates " << formName << " form" << std::endl;
            return funcArr[i](target);
        }
    }
    std::cerr << "Error: Unknown form name - " << formName << std::endl;
    return NULL;
}