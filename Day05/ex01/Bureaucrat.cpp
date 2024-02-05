/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:30:30 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/01 17:30:31 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    std::cout << "Bureaucrat default constructor is called" << std::endl;
    this->grade = 0;
}

Bureaucrat::Bureaucrat(const std::string Name, int grade) : name(Name), grade(grade) {
    std::cout << "Bureaucrat constructor is called" << std::endl;
    checkGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {
    std::cout << "Bureaucrat copy constructor is called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    if (this != &other) {
        std::cout << "Bureaucrat copy assigment operator is called" << std::endl;
        grade = other.getGrade();
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor" << std::endl;
}

const std::string Bureaucrat::getName() const { 
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

void Bureaucrat::incrementGrade()  {
    if (this->grade <= 1)
        throw Bureaucrat::GradeTooLowException();
    this->grade--;
}

void Bureaucrat::decrementGrade()  {
    if (this->grade >= 150)
        throw Bureaucrat::GradeTooHighException();
    this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high. Grade must be in the range [1, 150].";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low. Grade must be in the range [1, 150].";
}

void    Bureaucrat::checkGrade(int grade) const {
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
}

std::ostream& operator<<(std::ostream &o, const Bureaucrat &src) {
    o << src.getName() << " ,bureaucrat grade " << src.getGrade();
    return o;
}

void    Bureaucrat::signForm(Form &form) {
    form.signForm(*this);
}