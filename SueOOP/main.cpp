//
//  main.cpp
//  SueOOP
//
//  Created by cj on 10/14/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include <iostream>
#include "Box.h"
#include "Rectangle.hpp"
#include <string>
#include "Car.h"
#include "Truck.h"

/*
 Box and Rectangle are two definitions of a class which have a different syntax but function exactly the same.
 */
void exampleBoxAndRectangle(){
    
    std::cout << "*** Example: Class Syntax - Box and Rectangle ****" << std::endl;
    
    
    
    std::cout << "**********************************" << std::endl;

    std::cout <<  std::endl;
}

/*
 Car and Truck both inherit the properities of the Class Vehicle. Although the attributes year, make, model...etc are not defined in Car or Truck, the inheritence property allows Car and Truck to have these attributes.
 */
void exampleInheritance(){
    std::cout << "*** Example: Inheritance - Vehicle, Car, Truck ****" << std::endl;
    
    
    
    std::cout << "**********************************" << std::endl;
    
    std::cout <<  std::endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "OOP\n";
    
    exampleInheritance();
    exampleInheritance();
    
    return 0;
}
