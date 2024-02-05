/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:30:43 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/02 11:37:39 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;

class Form {

    private :
        const std::string name;
        bool signedStatus;
        const int signGrade;
        const int executeGrade;
    
    public :
        //CANONICAL
        Form();
        Form(const std::string, int signGrades, int executeGrades);
        Form(const Form &other);
        Form &operator=(const Form &other);
        ~Form();
        
        //METHODES
        const std::string   getName() const;
        bool                getSigned() const;
        int                 getSignGrade() const;
        int                 getExecuteGrade() const;
        void                checkGrade(int grade) const;
        void                beSigned(const Bureaucrat& bereaucrat);
        void                signForm(const Bureaucrat& bereaucrat);

        //EXCEPTIONS
        class GradeTooHighException : public std::exception {
			const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char * what() const throw();
		};
};

std::ostream& operator<<(std::ostream &o, const Form &src);

#endif