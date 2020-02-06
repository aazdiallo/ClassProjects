/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdoul Diallo
 *
 * Created on October 24, 2018, 9:46 AM
 */

#include <iostream>
#include "Fraction.h"

/*
 * 
 */

void test_print()
{
    int n = 0, d = 0;
    std::cin >> n >> d;
    Fraction f = {n, d};
    nonReducible(f); // Making sure that the fraction is not reducible
    std::cout << f << std::endl;
}
int main()
{
    int option;
    std::cin >> option;
    switch (option)
    {
    case 1:
    test_print();
    break;
    }
    
    return 0;
}

