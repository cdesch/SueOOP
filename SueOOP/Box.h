//
//  Box.h
//  SueOOP
//
//  Created by cj on 10/14/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#ifndef __SueOOP__Box__
#define __SueOOP__Box__

#include <stdio.h>
#include <iostream>

//Box Class
class Box{
    
private:
    int height;
    int width;
    
public:
    Box(); // default Constructor
    ~Box(); //Deconstructor
    Box(int h, int w);
    
    //member functions
    int getArea();  //Returns area of the box, height times width
    void print();
    
    //setters
    void setHeight(int h);
    void setWidth(int w);
    
    //Getters
    int getHeight();
    int getWidth();
    
};

#endif /* defined(__SueOOP__Box__) */
