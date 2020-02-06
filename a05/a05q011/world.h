/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   world.h
 * Author: Abdoul Diallo
 *
 * Created on October 2, 2018, 5:00 PM
 */

#ifndef WORLD_H
#define WORLD_H

/*********************************************************************/

void init(char world[10][10]);
//Set all elements in the array to ' ' and erects the walls.

void print(char world[10][10]);
/******** Prints the 2-d array world. This includes a border of 'X' characters
and integers 0-9 marking the x-coordinates going left to right and
y-coordinates going top to bottom. Here is an example.**************/

void draw_wall (int x, int y, int d, char wall[10][10]);

bool can_draw (int x, int y, int d, char wall[10][10]);

void set(char world[10][10], int x, int y, char c);
//Sets world[x][y] to character c.

void clear(char world[10][10], int x, int y);
//Sets world[x][y] to ' '.

bool is_unoccupied(char world[10][10], int x, int y);
//Returns true exactly when world[x][y] is a space.

bool is_occupied(char world[10][10], int x, int y);
//Returns true exactly when world[x][y] is not a space.
 
/**********************************************************************/

#endif /* WORLD_H */

