/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:33:01 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/02 14:43:15 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {
    std::cout << "Robot Default consructor is Called" << std::endl;
    this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) {
    std::cout << "Robot Consructor is Called" << std::endl;
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)  : Form(other) {
    std::cout << "Robot Copy consructor is Called" << std::endl;
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        std::cout << "Robot copy assigment is Called" << std::endl;
        this->target = other.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Robot Destructor is called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (this->getSigned() == false){
        throw FormNotSigned();
    } if (executor.getGrade() >this->getExecuteGrade()) {
        throw GradeTooLowException();
    } else {
        std::cout << "Drilling noise" << std::endl;
        srand(time(0));
        if (rand() % 2 == 0) {
            std::cout << this->target << " has been robotomized successfully" << std::endl;
        } else {
            std::cout << this->target << " robotomized failed" << std::endl;
        }
    }
}

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& Form) {
    os << "Robot: " << Form.getName() << ", Signed: " << (Form.getSigned() ? "Yes" : "No") << ", Sign Grade: " << Form.getSignGrade() << ", Execute Grade: " << Form.getExecuteGrade();
    return os;
}