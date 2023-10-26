/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:51:00 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/23 13:55:47 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string myString = "HI THIS IS BRAIN";
    std::string &stringREF = myString;
    std::string *stringPTR = &myString;

    std::cout << "Memory address of 'myString' " << &myString << std::endl;
    std::cout << "Memory address of 'stringREF' " << &stringREF << std::endl;
    std::cout << "Memory address of 'stringPTR' " << stringPTR << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Value of 'myString' " << myString << std::endl;
    std::cout << "Value of 'stringREF' " << stringREF << std::endl;
    std::cout << "Value of 'stringPTR' " << *stringPTR << std::endl;
    return 0;
}
