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
#include "world.h"
#include "PowerStation.h"

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


void test_move_east()
{
    char name;
    int x, y;
    int energylevel;
    std::cin >> name >> x >> y >> energylevel;
    Robot r;
    init(r, name, x, y, energylevel);
    move_east(r);
    print(r);
    
    return;
}


void test_move_west()
{
    char name;
    int x, y;
    int energylevel;
    std::cin >> name >> x >> y >> energylevel;
    Robot r;
    init(r, name, x, y, energylevel);
    move_west(r);
    print(r);
    
    return;
}


void test_inc_energylevel()
{
    char name;
    int x, y;
    int energylevel;
    std::cin >> name >> x >> y >> energylevel;
    Robot r;
    init(r, name, x, y, energylevel);
    int i;
    std::cin >> i;
    inc_energylevel(r, i);
    print(r);
    return;
}


void test_dec_energylevel()
{
    char name;
    int x, y;
    int energylevel;
    std::cin >> name >> x >> y >> energylevel;
    Robot r;
    init(r, name, x, y, energylevel);
    int i;
    std::cin >> i;
    dec_energylevel(r, i);
    print(r);
    return;
}


void test_init_and_print_world()
{
    char world[10][10];
    
    bool verif = true;
    
    do
    {
        int x = 0, y = 0, d = 0;
        do{
            d = rand() % 4;
            x = rand() % 10;
            y = rand() % 10;
        }while(!((y >= 0 && y < 10) && (x >= 0 && x < 10) && (d >= 0 && d < 4)));
        
        init(world);
        verif = can_draw (x, y, d, world);
        
        if (verif)
        {
            draw_wall(x, y, d, world);
            
            x = y= d = 0;
            
            do{
                d = rand() % 4;
                x = rand() % 10;
                y = rand() % 10;
            }while(!((y > 0 && y < 10) && (x > 0 && x < 10) && (d >= 0 && d < 4)));
            
            verif = can_draw(x, y, d, world);
            if (verif)
            {
                draw_wall(x, y, d, world);
                print (world);
                break;
            }
            else
               verif = false;
        }
        else
            verif =false;
        
    }while (verif == false);
    
  return;
}


void test_set()
{
    char world[10][10];
    init(world);
    int x = 0;
    int y = 0;
    char c = ' ';
    std::cin >> x >> y >> c;
    set(world, x, y, c);
    print(world);
}


void test_init_and_print_power_station()
{
    int x = 0, y = 0;
    int energylevel;
    std::cin >> x >> y >> energylevel;
    PowerStation ps;
    init(ps, x, y, energylevel);
    print(ps);
    
    return ;
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
            
        case 4:
            test_move_east();
            break;
            
        case 5:
            test_move_west();
            break;
            
        case 6:
            test_inc_energylevel();
            break;
            
        case 7:
            test_dec_energylevel();
            break;
            
        case 8:
            test_init_and_print_world();
            break;
            
        case 9:
            test_set();
            break;
            
        case 10:
            test_init_and_print_power_station();
            break;
            
    }
return 0;
}
