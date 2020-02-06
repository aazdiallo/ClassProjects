/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PowerStation.h
 * Author: Abdoul Diallo
 *
 * Created on October 7, 2018, 1:52 AM
 */

#ifndef POWERSTATION_H
#define POWERSTATION_H

struct PowerStation
{
int x, y;
int energylevel;
};
void init(PowerStation & powerstation, int x, int y, int energylevel);
void print(const PowerStation & powerstation);
void dec_energylevel(PowerStation & powerstation, int d);


#endif /* POWERSTATION_H */

