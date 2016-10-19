/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RobotPart.h
 * Author: thomas
 *
 * Created on October 4, 2016, 8:52 PM
 */

#ifndef ROBOTPARTS_H
#define ROBOTPARTS_H

#include <string>
#include <vector>

class RobotPart {
protected:
    std::string Name;
    std::string Type;
    double Weight;
    double Cost;
    std::string Description;
public:
    RobotPart();
    virtual void SetInfo(std::string name, int modnum, double weight, double cost, std::string desc);
    int modelNumber;
    
};

class Head : public RobotPart
{
public:
    Head();
    void SetInfo(std::string name, int modnum, double weight, double cost, std::string desc);
};

class Locomotor : public RobotPart
{
public:
    Locomotor();
    void SetInfo(std::string name, int modnum, double weight, double cost, std::string desc);
};

class Battery : public RobotPart
{
public:
    Battery();
    double Energy;
    double maxPower;
    void SetInfo(std::string name, int modnum, double weight, double cost, std::string desc);
    void setBatteryInfo(double energy, double power);
};

class Arm : public RobotPart
{
public:
    Arm();
    void setPowerConsumed(int power);
    void SetInfo(std::string name, int modnum, double weight, double cost, std::string desc);
    int powerConsumed;
};

class Torso : public RobotPart
{
public:
    Torso();
    int batteryCompartments;
    void SetInfo(std::string name, int modnum, double weight, double cost, std::string desc);
    void setBatteryCompartments(int batteries);
};

#endif /* ROBOTPARTS_H */