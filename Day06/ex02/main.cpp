/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:00:58 by mhabib-a          #+#    #+#             */
/*   Updated: 2024/02/06 14:59:12 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() {
    std::srand(std::time(0));
    int random = std::rand() % 3;
    switch (random) {
        case 0:
            return new A();
        case 1:
            return new B(); 
        default:
            return new C();
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "Pointer Object Type: A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "Pointer Object Type: B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "Pointer Object Type: C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

void identify(Base& p) {
    try {
        A &aRef = dynamic_cast<A&>(p);
        (void)aRef;
        std::cout << "Reference Object type: A" <<std::endl;
    } catch (std::bad_cast) {}

    try {
        B &bRef = dynamic_cast<B&>(p);
        (void)bRef;
        std::cout << "Reference Object type: B" << std::endl;
    } catch (std::bad_cast) {}

    try {
        C &cRef = dynamic_cast<C&>(p);
        (void)cRef;
        std::cout << "Reference Object type: C" << std::endl;
    } catch (std::bad_cast) {}
}

int main() {
    Base* obj = generate();
    Base& obj1 = *obj;
    identify(obj1);
    identify(obj);
    delete obj;
    return 0;
}
