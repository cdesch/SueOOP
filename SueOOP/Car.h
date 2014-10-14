//
//  Car.h
//  SueOOP
//
//  Created by cj on 10/14/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#ifndef __SueOOP__Car__
#define __SueOOP__Car__

#include <stdio.h>
#include "Vehicle.h"
class Car: public Vehicle{
    
private:
    int passengerCapacity;
public:
    Car();
    ~Car();
    Car(int passengerCapacity);
    
    //Setters//
    void setPassengerCapacity(int passengerCapacity);
    
    //Getters//
    int getPassengerCapacity();
    
    
};
#endif /* defined(__SueOOP__Car__) */
