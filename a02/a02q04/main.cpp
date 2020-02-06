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

void vec_add(int & x0, int & y0, int x1, int y1, int x2, int y2)
{
    x0 = x1 + x2;
    y0 = y1 + y2;
}
void vec_add(int * x0, int * y0, int x1, int y1, int x2, int y2)
{
    *x0 = x1 + x2;
    *y0 = y1 + y2;
}


int main()
{
    int x0 = 0, y0 = 0, x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    
    vec_add(x0, y0, x1, y1, x2, y2);
    std::cout << '<' << x0 << ',' << y0 << "> ";
    
    vec_add(&x0, &y0, x1, y1, x2, y2);
    std::cout << '<' << x0 << ',' << y0 << ">\n";
    
    return 0;
}

