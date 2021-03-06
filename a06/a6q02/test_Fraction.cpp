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
void test_add()
{
    int n0 = 0, d0 = 0, n1 = 0, d1 = 0;
    std::cin >> n0 >> d0 >> n1 >> d1;
    Fraction r0 = {n0, d0};
    Fraction r1 = {n1, d1};
    
    nonReducible(r0); // Making sure that r0 is not reducible
    nonReducible(r1); // Making sure that r1 is not reducible
    std::cout << r0 + r1 << std::endl;
    
    Fraction sum = r0 + r1;
    nonReducible (sum);
    // Reduced form 
    std::cout << "Reduced fraction: ";
    std::cout << sum << std::endl;
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
        
        case 2:
            test_add();
            break;
    }
    
    return 0;
}
