/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:33:20 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/02 11:43:50 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
    
    private:
        std::string target;
    
    public:
        //CANONICAL
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        
        //METHODES
        void    execute(Bureaucrat const & executor) const;
};


std::ostream& operator<<(std::ostream &o, const ShrubberyCreationForm &src);

#endif