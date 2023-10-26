/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:23:33 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/18 13:29:55 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <iostream>
#include <fstream>
#include <string>

class Replace {
    private :
        std::string  &sourceStr;
        std::string &targetStr;
        std::string &replacementStr;
    public :
        Replace(std::string &source, std::string &target, std::string &replacement);
        bool    replaceOccurence();
};

#endif