/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:33:12 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/01 17:33:13 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137) {
    std::cout << "Shrubbery Default Constructor is called" << std::endl;
    this->target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137) {
    std::cout << "Shrubbery Constructor is called" << std::endl;
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other)  {
    std::cout << "Shrubbery Copy Constructor is called" << std::endl;
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this != &other) {
        std::cout << "Shrubbery Copy Assigment is called" << std::endl;
        this->target = other.target;
    } 
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Shrubbery Destructor is called" << std::endl;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (this->getSigned() == false){
        throw FormNotSigned();
    } if (executor.getGrade() >this->getExecuteGrade()) {
        throw GradeTooLowException();
    } else {
        std::ofstream file(this->target + "_shubbery");
        file << "               _{\\ _{\\{\\/}/}/}__" << std::endl;
        file << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
        file << "            {/{/\\}{/{/\\}(_)}{/{/\\}  _" << std::endl;
        file << "         {\\{/(/}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
        file << "        {/{/(_)/}{\\{/)/}{\\(_){/}/}/}/}" << std::endl;
        file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
        file << "      {/{/{\\{\\{(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
        file << "      _{\\{/{\\{/(_)/}/}{/{/{/\\}\\)(\\}{/\\}" << std::endl;
        file << "     {/{/{\\{(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
        file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/)(/}" << std::endl;
        file << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
        file << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
        file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
        file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
        file << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
        file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
        file << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
        file << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
        file << "              (_)  \\.-'.-/" << std::endl;
        file << "          __...--- |'-.-'| --...__" << std::endl;
        file << "   _...--\"   .-'  |'-.-'|  ' -.  \"\"--..__" << std::endl;
        file << " -\"    ' .  . '   |.'-._| '  . .  '   jro" << std::endl;
        file << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
        file << "          ' ..     |'-_.-|" << std::endl;
        file << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
        file << "              .'   |'- .-|   '." << std::endl;
        file << "  ..-'   ' .  '.   `-._-_.'   .'  '  - ." << std::endl;
        file << "   .-' '        '-._______.-'     '  ." << std::endl;
        file << "        .      ~," << std::endl;
        file.close();
    }
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& Form) {
    os << "Shrubbery: " << Form.getName() << ", Signed: " << (Form.getSigned() ? "Yes" : "No") << ", Sign Grade: " << Form.getSignGrade() << ", Execute Grade: " << Form.getExecuteGrade();
    return os;
}