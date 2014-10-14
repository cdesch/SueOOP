//
//  Truck.h
//  SueOOP
//
//  Created by cj on 10/14/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#ifndef __SueOOP__Truck__
#define __SueOOP__Truck__

#include <stdio.h>
#include "Vehicle.h"
class Truck: public Vehicle{
    
private:
    int passengerCapacity;
    float payloadCapacity;
public:
    Truck();
    ~Truck();
    Truck(int passengerCapacity, float payloadCapacity);
    
    //Setters//
    void setPassengerCapacity(int passengerCapacity);
    void setPayloadCapacity(float payloadCapacity);
    
    //Getters//
    int getPassengerCapacity();
    float getPayloadCapacity();
    
    
};

#endif /* defined(__SueOOP__Truck__) */
