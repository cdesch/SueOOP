//
//  Box.cpp
//  SueOOP
//
//  Created by cj on 10/14/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include "Box.h"


// default Constructor
Box::Box(){
    this->height = 0;
    this->width = 0;
}
//Deconstructor
Box::~Box(){
}

Box::Box(int h, int w){
    this->height = h;
    this->width = w;
}

//member functions
//Returns area of the box, height times width
int Box::getArea(){
    return this->height * this->width;
}
void Box::print(){
    std::cout << "H: " << this->height << " W: " << this->width << std::endl;
}

//setters
void Box::setHeight(int h){
    this->height = h;
}
void Box::setWidth(int w){
    this->width = w;
}

//Getters
int Box::getHeight(){
    return this->height;
}
int Box::getWidth(){
    return this->width;
}

