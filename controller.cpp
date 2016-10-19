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

#include <cstdlib>
#include <iostream>
#include <vector>
#include "controller.h"
#include "RobotParts.h"

using namespace std;

controller::controller() {
    string Name = "Test name";
    int modelNumber = 1;
    string Type = "Test type";
    double Weight = 10;
    double Cost = 123;
    string Description = "Test Description";
    int input,input2;
    int modelCount=0;
    vector<int> modelinfo;
    vector<Head> headV;
    vector<Locomotor> locomotorV;
    vector<Torso> torsoV;
    vector<Arm> armV;
    vector<Battery> batteryV;
    
    cout << "Main Menu\n---------\n1) Create\n2) Report\n3) Quit\n\nEnter the number of the selection you want: ";
    cin >> input;
    switch(input){ //switch for main menu
        case 1:
            cout << "\nCreate\n------\n1) Robot Part\n2) Robot Model\n\nEnter the number of the selection you want: ";
            cin >> input;
            switch(input){ //switch for create menu
                case 1:{
                    string name;
                    string desc;
                    double weight;
                    double cost;
                    int modnum;
                    cout << "\n1) Head\n2) Locomotor\n3) Torso\n4) Arm\n5) Battery\n\nEnter the number of the part type you wish to create: ";
                    cin >> input;
                    switch(input){ //switch for part selection
                        case 1:{
                            cout << "What is the head's name?\n";
                            cin >> name;
                            cout << "What is the head's weight (in kg)?\n";
                            cin >> weight;
                            cout << "What is the head's cost (in USD)?\n";
                            cin >> cost;
                            cout << "Type a brief description for the head: \n";
                            cin.ignore();
                            getline(cin,desc);
                            modnum=headV.size()+1;
                            Head head;
                            head.SetInfo(name,modnum,weight,cost,desc);
                            headV.push_back(head);
                            break;}
                        case 2:{
                            cout << "What is the locomotor's name?\n";
                            cin >> name;
                            cout << "What is the locomotor's weight (in kg)?\n";
                            cin >> weight;
                            cout << "What is the locomotor's cost (in USD)?\n";
                            cin >> cost;
                            cout << "Type a brief description for the locomotor: \n";
                            cin.ignore();
                            getline(cin,desc);
                            modnum=locomotorV.size()+1;
                            Locomotor locomotor;
                            locomotor.SetInfo(name,modnum,weight,cost,desc);
                            locomotorV.push_back(locomotor);
                            break;}
                        case 3:{
                            int compartments;
                            cout << "What is the torso's name?\n";
                            cin >> name;
                            cout << "What is the torso's weight (in kg)?\n";
                            cin >> weight;
                            cout << "What is the torso's cost (in USD)?\n";
                            cin >> cost;
                            cout << "How many battery compartments does the torso have?\n";
                            cin >> compartments;
                            cout << "Type a brief description for the torso: \n";
                            cin.ignore();
                            getline(cin,desc);
                            modnum=torsoV.size()+1;
                            Torso torso;
                            torso.SetInfo(name,modnum,weight,cost,desc);
                            torso.setBatteryCompartments(compartments);
                            torsoV.push_back(torso);
                            break;}
                        case 4:{
                            double powerc;
                            cout << "What is the arm's name?\n";
                            cin >> name;
                            cout << "What is the arm's weight (in kg)?\n";
                            cin >> weight;
                            cout << "What is the arm's cost (in USD)?\n";
                            cin >> cost;
                            cout << "How much energy does the arm consume (in W)?\n";
                            cin >> powerc;
                            cout << "Type a brief description for the arm: \n";
                            cin.ignore();
                            getline(cin,desc);
                            modnum=armV.size()+1;
                            Arm arm;
                            arm.SetInfo(name,modnum,weight,cost,desc);
                            arm.setPowerConsumed(powerc);
                            armV.push_back(arm);
                            break;}
                        case 5:{
                            double energy;
                            double mpower;
                            cout << "What is the battery's name?\n";
                            cin >> name;
                            cout << "What is the battery's weight (in kg)?\n";
                            cin >> weight;
                            cout << "What is the battery's cost (in USD)?\n";
                            cin >> cost;
                            cout << "What is the battery's energy capacity (in Wh?)\n";
                            cin >> energy;
                            cout << "What is the battery's maximum power output (in W)?\n";
                            cin >> mpower;
                            cout << "Type a brief description for the battery: \n";
                            cin.ignore();
                            getline(cin,desc);
                            modnum=batteryV.size()+1;
                            Battery battery;
                            battery.SetInfo(name,modnum,weight,cost,desc);
                            battery.setBatteryInfo(energy,mpower);
                            batteryV.push_back(battery);
                            break;}
                        break;
                    }
                }
                case 2:{
                    cout << "\nIn Progress";
                    break;
                }
            }
            break;
        case 2:
            break;
        case 3:
            exit(0);
    }
}


