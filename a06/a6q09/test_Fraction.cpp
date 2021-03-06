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
    reduce(f); // Making sure that the fraction is not reducible
    std::cout << f << std::endl;
}


void test_add()
{
    int n0 = 0, d0 = 0, n1 = 0, d1 = 0;
    std::cin >> n0 >> d0 >> n1 >> d1;
    Fraction r0 = {n0, d0};
    Fraction r1 = {n1, d1};
    
    reduce(r0); // Making sure that r0 is not reducible
    reduce(r1); // Making sure that r1 is not reducible
    std::cout << r0 + r1 << std::endl;
    
    Fraction sum = r0 + r1;
    reduce (sum);
    
    // Reduced form 
    std::cout << "Reduced fraction: ";
    std::cout << sum << std::endl;
}


void test_subtract()
{
    int n0 = 0, d0 = 0, n1 = 0, d1 = 0;
    std::cin >> n0 >> d0 >> n1 >> d1;
    Fraction r0 = {n0, d0};
    Fraction r1 = {n1, d1};
    
    reduce(r0); // Making sure that r0 is not reducible
    reduce(r1); // Making sure that r1 is not reducible
    std::cout << r0 - r1 << std::endl;
    
    Fraction subract = r0 - r1;
    reduce (subract);
    
    std::cout << "Reduced fraction: ";
    std::cout << subract << std::endl;
}


void test_multiply()
{
    int n0 = 0, d0 = 0, n1 = 0, d1 = 0;
    std::cin >> n0 >> d0 >> n1 >> d1;
    Fraction r0 = {n0, d0};
    Fraction r1 = {n1, d1};
    
    reduce(r0); // Making sure that r0 is not reducible
    reduce(r1); // Making sure that r1 is not reducible
    std::cout << r0 * r1 << std::endl;
    
    Fraction multiply = r0 * r1;
    reduce (multiply);
    
    std::cout << "Reduced fraction: ";
    std::cout << multiply << std::endl;
}


void test_divide()
{
    int n0 = 0, d0 = 0, n1 = 0, d1 = 0;
    std::cin >> n0 >> d0 >> n1 >> d1;
    Fraction r0 = {n0, d0};
    Fraction r1 = {n1, d1};
    
    reduce(r0); // Making sure that r0 is not reducible
    reduce(r1); // Making sure that r1 is not reducible
    std::cout << r0 / r1 << std::endl;
    
    Fraction divide = r0 / r1;
    reduce (divide);
    
    std::cout << "Reduced fraction: ";
    std::cout << divide << std::endl;
}


void test_eq()
{
    int n0 = 0, d0 = 0, n1 = 0, d1 = 0;
    std::cin >> n0 >> d0 >> n1 >> d1;
    Fraction r0 = {n0, d0};
    Fraction r1 = {n1, d1};
    
    reduce(r0); // Making sure that r0 is not reducible
    reduce(r1); // Making sure that r1 is not reducible
    
    std::cout << (r0 == r1) << std::endl;
    
}


void test_not_eq()
{
    int n0 = 0, d0 = 0, n1 = 0, d1 = 0;
    std::cin >> n0 >> d0 >> n1 >> d1;
    Fraction r0 = {n0, d0};
    Fraction r1 = {n1, d1};
    
    reduce(r0); // Making sure that r0 is not reducible
    reduce(r1); // Making sure that r1 is not reducible
    
    std::cout << (r0 != r1) << std::endl;
    
}


void test_reduce()
{
    int n = 0, d = 0;
    std::cin >> n >> d;
    Fraction f = {n, d};
    reduce(f); // Making sure that the fraction is not reducible
    std::cout << f << std::endl;
}


void test_get_function()
{
    int n = 0, d = 0;
    std::cin >> n >> d;
    Fraction f = get_Fraction (n, d);
    reduce(f); // Making sure that the fraction is not reducible
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
        
        case 2:
            test_add();
            break;
            
        case 3:
            test_subtract();
            break;
            
        case 4:
            test_multiply();
            break;
            
        case 5:
            test_divide();
            break;
            
        case 6:
            test_eq();
            break;
            
        case 7:
            test_not_eq();
            break;            
            
        case 8:
            test_reduce();
            break;
            
        case 9:
            test_get_function();
            break;
    }
    
    return 0;
}
