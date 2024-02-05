/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:31:32 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/02 11:40:15 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include "AForm.hpp"

class Form;

class Bureaucrat{

	private : 
		const std::string name;
		int grade;

	public :
		//CANONICAL
		Bureaucrat();
		Bureaucrat(const std::string Name, int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		//METHODES
		const std::string	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				checkGrade(int grade) const;
		void    			signForm(Form &Form);
		void    			executeForm(Form const & form);
		
		//EXCEPTIONS
		class GradeTooHighException : public std::exception {
			const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char * what() const throw();
		};

};

std::ostream& operator<<(std::ostream &o, const Bureaucrat &src);

#endif