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

int factorial(int n)
{
    int p = 1;
    int i = 1;
    // Compute factorial of n and store at integer that p points to
    for (i = 1; i <= n; i++)
    {
        p *= i;
    }
    int ret = p;
    return ret;
}

int factorial2(int n)
{
    // Declare pointer p, allocate memory for p, and initialize *p
    int * p = new int;
    *p = 1;
    // Declare pointer i, allocate memory for i, and initialize *i
    int * i = new int;
    *i = 1;
    // Compute the factorial of n and store at *p
    for (*i = 1; *i <= n; (*i)++)
    {
        *p *= *i;
    }
    int ret = *p; // Copy factorial stored at *p into ret
    // Deallocate memory for i.
    delete i;
    // Deallocate memory for p.
    delete p;
    
    return ret;
}

int main()
{
    int n = 0;
    std::cin >> n;
    std::cout << factorial(n) << ' '
    << factorial2(n) << '\n';
    
    return 0;
}

