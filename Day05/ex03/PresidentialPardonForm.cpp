/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:32:51 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/01 17:32:52 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) {
    std::cout << "Presidential Default constructor is called" << std::endl;
    this->target = "Default";
}


PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5) {
    std::cout << "Presidential Default constructor is called" << std::endl;
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other) {
    std::cout << "Presidential Default constructor is called" << std::endl;
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    if (this != &other) {
        std::cout << "Presidential Copy assignment is called" << std::endl;
        this->target = other.target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Presidential Destructor is called" << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (this->getSigned() == false){
        throw FormNotSigned();
    } if (executor.getGrade() >this->getExecuteGrade()) {
        throw GradeTooLowException();
    } else {
        std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& Form) {
    os << "Presidential: " << Form.getName() << ", Signed: " << (Form.getSigned() ? "Yes" : "No") << ", Sign Grade: " << Form.getSignGrade() << ", Execute Grade: " << Form.getExecuteGrade();
    return os;
}