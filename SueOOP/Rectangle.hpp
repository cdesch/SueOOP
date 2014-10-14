//
//  Rectangle.h
//  SueOOP
//
//  Created by cj on 10/14/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#ifndef __SueOOP__Rectangle__
#define __SueOOP__Rectangle__

#include <stdio.h>
#include <iostream>

//Rectangle Class

class Rectangle{
private:
    int height;
    int width;
    
public:
    // default Constructor
    Rectangle(){
        this->height = 0;
        this->width = 0;
    }
    //Deconstructor
    ~Rectangle(){
        
    }
    //Constructor with Params
    Rectangle(int h, int w){
        this->height = h;
        this->width = w;
    }
    
    //member functions
    //Returns area of the box, height times width
    int getArea(){
        return this->height * this->width;
    }
    void print(){
        std::cout << "H: " << this->height << " W: " << this->width << std::endl;
    }
    
    //setters
    void setHeight(int h){
        this->height = h;
    }
    void setWidth(int w){
        this->width = w;
    }
    
    //Getters
    int getHeight(){
        return this->height;
    }
    int getWidth(){
        return this->width;
    }
};



#endif /* defined(__SueOOP__Rectangle__) */
