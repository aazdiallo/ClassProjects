/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdoul Diallo
 *
 * Created on October 2, 2018, 2:54 PM
 */

#include <iostream>
#include <cstdlib>
#include "Robot.h"

void test_print()
{
    char name = ' ';
    int x = 0, y = 0;
    int energylevel = 0;
    
    std::cin >> name >> x >> y >> energylevel;
    Robot r;
    init(r, name, x, y, energylevel);
    print(r);
    
    return;
}


void test_move_north()
{
    char name;
    int x, y;
    int energylevel;
    std::cin >> name >> x >> y >> energylevel;
    Robot r;
    init(r, name, x, y, energylevel);
    move_north(r);
    print(r);
    
    return;
}


void test_move_south()
{
    char name;
    int x, y;
    int energylevel;
    std::cin >> name >> x >> y >> energylevel;
    Robot r;
    init(r, name, x, y, energylevel);
    move_south(r);
    print(r);
    
    return;
}


int main()
    {
    int seed;
    std::cin >> seed;
    srand(seed);
    int option = 0;
    std::cin >> option;
    
    switch (option)
    {
        case 1:
            test_print();
            break;
        
        case 2:
            test_move_north();
            break;
            
        case 3:
            test_move_south();
            break;
            
    }
return 0;
}
