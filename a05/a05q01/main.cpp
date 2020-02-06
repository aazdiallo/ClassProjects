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
    }
return 0;
}
