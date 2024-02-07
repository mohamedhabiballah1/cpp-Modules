/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:00:16 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/07 13:02:24 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {

    Data myData(42);
    
    uintptr_t serializedPtr = Serializer::serialize(&myData);
    
    Data* deserializedPtr = Serializer::deserialize(serializedPtr);

    if (&myData == deserializedPtr) {
        std::cout << "Serialization and deserialization successful." << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed." << std::endl;
    }

    return 0;
}