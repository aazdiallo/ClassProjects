/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mystring.cpp
 * Author: Abdoul Diallo
 *
 * Created on September 16, 2018, 11:07 PM
 */

#include "mystring.h"
#include <iostream>
#include <string>

    int str_len(char x[])
    {
        int len = 0;
        while (x[len] != '\0')
    {
        ++len;
    }
        return len;
    }
    void str_cat(char x[], char y[])
    {
        int xlen = str_len(x);
        int ylen = str_len(y);
        for (int i = 0; i <= ylen; ++i)
    {
        x[xlen + i] = y[i];
    }
        return;
    }
    
    // Comparing two chars
    int str_cmp(char x[], char y[])
    {
        int test = 0;
        while (x[test] == y[test])
        {
            if ((x[test] == '\0') || (y[test] == '\0'))
                break;
                test++;
        }
        if ((x[test] == '\0') && (y[test] == '\0'))
            return 0;
        else
            return 1;
        
    }
    
    void str_cpy(char x[], char y[])
    {
        int test = 0;
        while (y[test] != '\0')
        {
            x[test] =y[test];
            test++;
        }
    }
    
    int str_chr(char x[], char c)
    {
        int position = 0;
        int test = 0;
        while (x[test] != '\0')
        {
            if (x[test] == c)
            position = test;
            test++;
        }
        if (position != 0)
            return position;
        else
            return -1;
    }
    
    int str_str(char x[], char y[])
    {
        int xp = 0, yp = 0; //position of x and y
        while (x[xp] != '\0')
        {
            if (x[xp] == y[0])
            {
                yp = 1;
                while (y[yp] != '\0' && x[yp + xp] != '\0' && x[yp + xp] == y[yp])
                {
                    yp++;
                }
                if (y[yp] == '\0' && yp == str_len(y))
                    return xp;
            }
            xp++;
        }
        return -1;
    
    }
    