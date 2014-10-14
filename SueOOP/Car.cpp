//
//  Car.cpp
//  SueOOP
//
//  Created by cj on 10/14/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include "Car.h"


Car::Car(){
}

Car::~Car(){
}

Car::Car(int passengerCapacity){
    this->passengerCapacity = passengerCapacity;
}

//Setters//
void Car::setPassengerCapacity(int passengerCapacity){
    this->passengerCapacity = passengerCapacity;
}

//Getters//
int Car::getPassengerCapacity(){
    return this->passengerCapacity;
}
