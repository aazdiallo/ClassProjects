/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*********************************************************************
File : world.cpp
Author: Abdoul Diallo
  
Implementation of world.h.
*********************************************************************/

#include <iostream>
#include <cstdlib>
#include "Robot.h"
#include "world.h"
#include "PowerStation.h"

void init(char world[10][10])
{
    // Emptying the content of the world
    for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                   world[i][j] = ' ';
                }
            }
}


bool can_draw (int x, int y, int d, char wall[10][10])
{
    switch (d)
    {
        case 0:// Erecting the wall toward the north(changing raws 'upward')
            if (y-3 >= 0){
            for (int i = 0; i < 4; i++)
                {
                    if (wall[y-i][x] == 'X')
                        return false;
                }
            }
            else
                return false;
            break;
            
        case 1://Erecting the wall toward the south (changing raws 'downward')
            if (y+3 < 10){
                for (int i = 0; i < 4; i++)
                {
                    if (wall[y+i][x] == 'X')
                        return false;
                }
            }
            else
                return false;
            break;
            
        case 2://Erecting the wall toward the east(changing columns 'foreward')
            if (x+3 < 10){
                for (int i = 0; i < 4; i++)
                {
                    if (wall[y][x+i] == 'X')
                        return false;
                }
            }
            else
                return false;
            break;
            
        case 3://Erecting the wall toward the west(changing columns 'backward')
            if (x-3 >= 0){
                for (int i = 0; i < 4; i++)
                {
                    if (wall[y][x-i] == 'X')
                        return false;
                }
            }
            else
                return false;
            break;
    }
    return true;
}


void draw_wall (int x, int y, int d, char wall[10][10])
{
    
    switch (d)
    {
        case 0:// Erecting the wall toward the north(changing raws 'upward')
                for (int i = 0; i < 4; i++)
                {
                    wall[y-i][x] = 'X';
                }
            break;
            
        case 1://Erecting the wall toward the south (changing raws 'downward')
                for (int i = 0; i < 4; i++)
                {
                    wall[y+i][x] = 'X';
                }
            break;
            
        case 2://Erecting the wall toward the east(changing columns 'foreward')
                for (int i = 0; i < 4; i++)
                {
                    wall[y][x+i] = 'X';
                }
            break;
            
        case 3://Erecting the wall toward the west(changing columns 'backward')
                for (int i = 0; i < 4; i++)
                {
                    wall[y][x-i] = 'X';
                }
            break;
            
    }
}



void print(char world[10][10])
{
        for (int raw = 0; raw < 14; raw++)
    {
        if (raw == 0) // Print first outer raw
        {
            std::cout << "   ";
            for (int j = 0; j < 10; j++)
            std::cout << j ;
            std::cout << " \n";
        }
        
        else if (raw == 1)// Print second outer raw
        {
            std::cout << "  ";
            for (int j = 0; j < 12; j++)
            std::cout << 'X' ;
            std::cout << " \n";
        }
        
        else if (raw == 2)// Print raw number and world's wall
        {
            for (int i = 0; i < 10; i++)
            {
                std::cout << i << " X";
                for (int j = 0; j < 10; j++)
                {
                    std::cout << world[i][j];
                    //std::cout << ' ';
                }
                std::cout << "X\n";
            }
        }
        
        else if (raw == 13)// Print last raw
        {
            std::cout << "  ";
            for (int j = 0; j < 12; j++)
            std::cout << 'X' ;
            std::cout << " \n";
        }
    }
}


void set(char world[10][10], int x, int y, char c)
{
    world[y][x] = c;
}


void clear(char world[10][10], int x, int y)
{
    world[y][x] = ' ';
}


bool is_unoccupied(char world[10][10], int x, int y)
{
    if (world[y][x] == ' ')
        return true;
    else 
        return false;
}


bool is_occupied(char world[10][10], int x, int y)
{
    if (world[y][x] != ' ')
        return true;
    else 
        return false;
}