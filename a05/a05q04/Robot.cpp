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


void move_north(Robot & robot)
{
    //Getting the y value of the robot to move it north
    if (robot.energylevel > 1) //If the energy level is > 0
    {
        robot.y -= 1; //Decrement y value
        robot.energylevel -= 1; //Decrement the energy level
    }
    
}


void move_south(Robot & robot)
{
    //Getting the y value of the robot to move it south
    if (robot.energylevel >= 1) //If the energy level is > 0
    {
        robot.y += 1; //Increment y value
        robot.energylevel -= 1; //Decrement the energy level
    }
    
}


void move_east(Robot & robot)
{
    //Getting the y value of the robot to move it east
    if (robot.energylevel >= 1) //If the energy level is > 0
    {
        robot.x += 1; //Increment x value
        robot.energylevel -= 1; //Decrement the energy level
    }
    
}