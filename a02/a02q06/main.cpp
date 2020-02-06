/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdoul Diallo
 *
 * Created on September 26, 2018, 8:29 PM
 */

#include <iostream>
    void scanf(int *);
    void scanf(char *);
    void scanf(double *); 
int main()
{
    char c = 0;
    int i = 0;
    double d = 0;
    scanf(&c);
    scanf(&i);
    scanf(&d);
    std::cout << c << std::endl;
    std::cout << i << std::endl;
    std::cout << d << std::endl;
    
return 0;
}

void scanf (int *x)
{
    std::cin>>*x;
}

void scanf (char *x)
{
    std::cin>>*x;
}

void scanf (double *x)
{
    std::cin>>*x;
}