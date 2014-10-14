//
//  Truck.cpp
//  SueOOP
//
//  Created by cj on 10/14/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include "Truck.h"

Truck::Truck(){
}

Truck::~Truck(){
}

Truck::Truck(int passengerCapacity, float payloadCapacity){
    this->passengerCapacity = passengerCapacity;
    this->payloadCapacity = payloadCapacity;
}

//Setters//
void Truck::setPassengerCapacity(int passengerCapacity){
    this->passengerCapacity = passengerCapacity;
}

void Truck::setPayloadCapacity(float payloadCapacity){
    this->payloadCapacity = payloadCapacity;
}

//Getters//
int Truck::getPassengerCapacity(){
    return this->passengerCapacity;
}

float Truck::getPayloadCapacity(){
    return this->payloadCapacity;
}
