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
    