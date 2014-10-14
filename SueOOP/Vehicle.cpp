//
//  Vehicle.cpp
//  SueOOP
//
//  Created by cj on 10/14/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include "Vehicle.h"
Vehicle::Vehicle(){
    this->year = 0;
    this->make = "";
    this->model = "";
    this->wheels = 0;
    this->weight = 0;
}

Vehicle::~Vehicle(){
}

Vehicle::Vehicle(int y, std::string make, std::string model, int wheels, float weight){
    this->year = y;
    this->make = make;
    this->model = model;
    this->wheels = wheels;
    this->weight = weight;
}

//Setters//
void Vehicle::setYear(int year){
    this->year = year;
}
void Vehicle::setMake(std::string make){
    this->make = make;
}
void Vehicle::setModel(std::string model){
    this->model = model;
}
void Vehicle::setWheels(int wheels){
    this->wheels = wheels;
}
void Vehicle::setWeight(float weight){
    this->weight = weight;
}

//Getters//
int Vehicle::getYear(){
    return this->year;
}
std::string Vehicle::getMake(){
    return this->make;
}
std::string Vehicle::getModel(){
    return this->model;
}
int Vehicle::getWheels(){
    return this->wheels;
}
float Vehicle::getWeight(){
    return this->weight;
}