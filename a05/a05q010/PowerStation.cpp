/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "PowerStation.h"
#include "Robot.h"
#include "world.h"
#include <iostream>
#include <cstdlib>

void init(PowerStation & powerstation, int x, int y, int energylevel)
{
    powerstation.x = x;
    powerstation.y = y;
    powerstation.energylevel = energylevel;
    
}


void print(const PowerStation & powerstation)
{
    std::cout << "PowerStation: x=" << powerstation.x << " y=" << powerstation.y
            << " energylevel=" << powerstation.energylevel << "\n";
}