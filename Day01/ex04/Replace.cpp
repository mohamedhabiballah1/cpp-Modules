/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:24:01 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/10/23 14:22:01 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string &source, std::string &target, std::string &replacement) : sourceStr(source), targetStr(target), replacementStr(replacement) {
    
}

void    readAndReplace(std::string &source, std::string &target, std::string &replacement) {
    size_t startPos = 0;
    while ((startPos = source.find(target, startPos)) != source.npos) {
        source = source.substr(0, startPos) + replacement + source.substr(startPos + target.length(), source.length() - (startPos + target.length()));
        startPos += replacement.length();
    }
}

bool    Replace::replaceOccurence(){

    if (targetStr.empty())
        return false;

    std::ifstream inputFile(sourceStr);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open the input file." << std::endl;
        return false;
    }

    std::string outfile = sourceStr + ".replace";
    std::ofstream outputFile(outfile);
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to open the input file." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        readAndReplace(line, targetStr, replacementStr);
        outputFile << line << '\n';
    }
    inputFile.close();
    outputFile.close();
    return true;
}