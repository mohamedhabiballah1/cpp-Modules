/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:32:09 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/02 14:51:56 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Form::Form() : name("Form") , signGrade(1), executeGrade(1) {
    std::cout << "Form default constructor is called" << std::endl;
    this->signedStatus = false;
}

Form::Form(const std::string Name, int signGrades, int executeGrades) : name(Name), signGrade(signGrades), executeGrade(executeGrades) {
    std::cout << "Form constructor is called" << std::endl;
    this->signedStatus = false;
    checkGrade(executeGrades);
    checkGrade(signGrades);
}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
        std::cout << "Form copy assignment operator is called" << std::endl;
        this->signedStatus = other.getSigned();
    }
    return *this;
}

Form::Form(const Form &other) : name(other.name), signedStatus(other.signedStatus), signGrade(other.signGrade), executeGrade(other.executeGrade){
    std::cout << "Form copy constructor is called" << std::endl;
}

Form::~Form() {
    std::cout << "Form destructor is called" << std::endl;
}

const std::string Form::getName() const {
    return this->name;
}

bool Form::getSigned() const {
    return this->signedStatus;
}

int Form::getSignGrade() const {
    return this->signGrade;
}

int Form::getExecuteGrade() const {
    return this->executeGrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (this->signedStatus == false) {
        if (bureaucrat.getGrade() <= this->signGrade) {
            this->signedStatus = true;
        } else {
            throw GradeTooLowException();
        }
    }
}

void Form::signForm(const Bureaucrat &bureaucrat) {
    try {
        beSigned(bureaucrat);
        std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << bureaucrat.getName() << " couldn't sign " << this->getName() << " because " << e.what() << std::endl;
    }
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high. Grade must be in the range [1, 150].";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low. Grade must be in the range [1, 150].";
}

const char* Form::FormNotSigned::what() const throw() {
    return "The Form Not Signed";
}

void Form::checkGrade(int grade) const {
    if (grade < 1) {
        throw Form::GradeTooHighException();
    } else if (grade > 150) {
        throw Form::GradeTooLowException();
    }
}

std::ostream& operator<<(std::ostream& os, const Form& Form) {
    os << "Form: " << Form.getName() << ", Signed: " << (Form.getSigned() ? "Yes" : "No") << ", Sign Grade: " << Form.getSignGrade() << ", Execute Grade: " << Form.getExecuteGrade();
    return os;
}
