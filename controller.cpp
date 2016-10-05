/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   controller.cpp
 * Author: thomas
 * 
 * Created on October 4, 2016, 8:45 PM
 */

#include "controller.h"
#include "RobotParts.h"

controller::controller() {
    std::string Name = "Test name";
    int modelNumber = 1;
    std::string Type = "Test type";
    double Weight = 10;
    double Cost = 123;
    std::string Description = "Test Description";
    Head head;
    head.SetInfo(Name,modelNumber,Type,Weight,Cost,Description);
}


