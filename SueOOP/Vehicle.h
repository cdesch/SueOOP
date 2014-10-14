//
//  Vehicle.h
//  SueOOP
//
//  Created by cj on 10/14/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#ifndef __SueOOP__Vehicle__
#define __SueOOP__Vehicle__

#include <stdio.h>
#include <string>

class Vehicle{
    
    
private:
    int year;
    std::string make;
    std::string model;
    int wheels;
    float weight;
    
public:
    Vehicle();
    ~Vehicle();
    Vehicle(int y, std::string make, std::string model, int wheels, float weight);
    
    //Setters//
    void setYear(int year);
    void setMake(std::string make);
    void setModel(std::string model);
    void setWheels(int wheels);
    void setWeight(float weight);
    
    
    //Getters//
    int getYear();
    std::string getMake();
    std::string getModel();
    int getWheels();
    float getWeight();
    

};

#endif /* defined(__SueOOP__Vehicle__) */
