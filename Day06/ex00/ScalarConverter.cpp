/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:00:29 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/07 13:07:12 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool impossible(std::string input) {
    if (input == "+inff" || input == "-inff" || input == "nanf" || input == "nan" || input == "-inf" || input == "-inf") { return false; }
    return true;
}

bool    ifdigit(std::string input) {
    if (input[0] == '-')
        input = input.substr(1, input.length() - 1);
    for (size_t i = 0; i < input.length(); i++) {
        if (!std::isdigit(input[i])) { return false; }
    }
    return true;
}

int find(std::string input, char c) {
    int count = 0;
    for (size_t i = 0; i < input.length(); i++) {
        if (input[i] == c) { count++; }
    }
    return count;
}

bool ifFloating(std::string input) {
    if (input[0] == '-')
        input = input.substr(1, input.length() - 1);
    for (size_t i = 0; i < input.length(); i++) {
        if (!std::isdigit(input[i]) && input[i] != '.') {return false;}
    }  
    return true;
}

char getType(std::string input) {
    if (!impossible(input)) {
        return 'I';
    } else if (input.length() == 1) {
        if (input[0] >= '0' && input[0] <= '9') { return 'i'; } 
        else { return 'c'; }
    } else if (ifdigit(input)) {
        return 'i';
    } else if (find(input, '.') == 1) {
        if (find(input, 'f') == 1 && input[input.length() - 1] == 'f' && ifFloating(input.substr(0, input.length() - 1))) { return 'f'; }
        else if (ifFloating(input)) { return 'd'; }
    }
    return '\0';
}

void    Impossible() {
    std::cout << "int: impossible" << std::endl;
    std::cout << "char: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void    printImpossible() {
    std::cout << "int: impossible" << std::endl;
    std::cout << "char: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

void    castInt(std::string input) {
    std::istringstream iss(input);
    int _int;
    if (iss >> _int && iss.eof() && _int <= std::numeric_limits<int>::max() && _int >= std::numeric_limits<int>::min()) {
        char _char = static_cast<char>(_int);
        if (_char >= 32 && _char <= 126) {
            std::cout << "char: '"<< _char << "'" << std::endl;
        } else {
            std::cout << "char: Non displayable" << std::endl;
        }
        std::cout << "int: "<< _int << std::endl;
        float _float = static_cast<float>(_int);
        std::cout << "float: " << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
        double _double = static_cast<double>(_int);
        std::cout << "double: " << _double << std::endl;
    } else {
        printImpossible();
    }
}

void castFloat(std::string input) {
    float _float = std::atof(input.c_str());
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(_float) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) <<  _float << "f" << std::endl;
    double _double = static_cast<double>(_float);
    std::cout << "double: " << _double << std::endl;
}

void castDouble(std::string input) {
    double _double = std::atof(input.c_str());
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(_double) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(_double) << "f" << std::endl;
    std::cout << "double: " << _double << std::endl;
}

void castChar(std::string input) {
    char _char = input[0];
    if (_char >= 32 && _char <= 126) {
        std::cout << "char: '" << _char << "'" << std::endl;
    } else {
        std::cout << "char: Non displayable" << std::endl;
    }
    std::cout << "int: " << static_cast<int>(_char) << std::endl;
    float _float = static_cast<float>(_char);
    std::cout << "float: " << _float << "f" << std::endl;
    double _double = static_cast<double>(_char);
    std::cout << "double: " << _double << std::endl;
}

void ScalarConverter::convert(std::string input) {
    char _type = getType(input);

    switch (_type) {
        case 'i':
            castInt(input);
            break;
        case 'f':
            castFloat(input);
            break;
        case 'd':
            castDouble(input);
            break;
        case 'c':
            castChar(input);
            break;
        case 'I':
            Impossible();
            break;
        default:
            printImpossible();
            break;
    }
}
