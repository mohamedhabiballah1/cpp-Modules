/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:32:55 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/02 11:43:13 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESDENTIALPARDONFORM_HPP
#define PRESDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm : public Form {
    
    private:
        std::string target;
    
    public:
        //CANONICAL
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
        ~PresidentialPardonForm();
        
        //METHODES
        void    execute(Bureaucrat const & executor) const;
};


std::ostream& operator<<(std::ostream &o, const PresidentialPardonForm &src);

#endif