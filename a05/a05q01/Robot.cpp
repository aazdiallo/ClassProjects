/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "Robot.h"


void init(Robot & r, char name, int x, int y, int energylevel)
{
    r.name = name;
    r.x = x;
    r.y = y;
    r.energylevel = energylevel;
}


void print(const Robot & robot)
{
    std::cout << "<Robot: name=" << robot.name << ", x=" << robot.x << ", y="
              << robot.y << ", energylevel=" << robot.energylevel << '>' <<std::endl;
}