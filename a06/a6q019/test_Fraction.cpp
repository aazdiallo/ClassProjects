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

void test_get_n()
{
    int n = 0, d = 0;
    std::cin >> n >> d;
    Fraction f = get_Fraction(n, d); // form a fraction from user input
    //reduce(f); // Making sure that the fraction is not reducible
    std::cout << get_Fraction_n (f) << std::endl;
}


void test_get_d()
{
    int n = 0, d = 0;
    std::cin >> n >> d;
    Fraction f = get_Fraction(n, d); // form a fraction from user input
    //reduce(f); // Making sure that the fraction is not reducible
    std::cout << get_Fraction_d (f) << std::endl;
}


void test_set_n()
{
    int n = 0, d = 0;
    std::cin >> n >> d;
    Fraction f = {0, 0}; // Initialize the fraction to 0/0 form
    //reduce(f); // Making sure that the fraction is not reducible
    std::cout << set_n (f, n) << std::endl;
}


void test_set_d()
{
    int n = 0, d = 0;
    std::cin >> n >> d;
    Fraction f = {0, 0}; // Initialize the fraction to 0/0 form
    //reduce(f); // Making sure that the fraction is not reducible
    std::cout << set_d (f, d) << std::endl;
}


void test_set()
{
    int n = 0, d = 0;
    std::cin >> n >> d;
    Fraction f = {0, 0}; // Initialize the fraction to 0/0 form
    //reduce(f); // Making sure that the fraction is not reducible
    std::cout << set(f, n, d) << std::endl;
}

void test_int()
{
    int n = 0, d = 0;
    std::cin >> n >> d;
    Fraction f = get_Fraction(n, d); // Initialize the fraction to 0/0 form
    reduce(f); // Making sure that the fraction is not reducible
    std::cout << get_int(f) << std::endl;
}


void test_double()
{
    int n = 0, d = 0;
    std::cin >> n >> d;
    Fraction f = get_Fraction(n, d); // Initialize the fraction to 0/0 form
    reduce(f); // Making sure that the fraction is not reducible
    std::cout << get_double(f) << std::endl;
}


void test_increment_f()
{
    Fraction test = get_Fraction(0, 0);
    int n0 = 0, d0 = 0, n1 = 0, d1 = 0;
    std::cin >> n0 >> d0 >> n1 >> d1;
    Fraction r0 = get_Fraction(n0, d0);
    Fraction r1 = get_Fraction(n1, d1);
    
    test = r0 += r1;
    std::cout << r0 << std::endl;
    reduce (r0);
    //when the two fractions are == with one in a reduced form
    if (test == r0 && (test.n != r0.n || test.d != r0.d))
        std::cout << "Reduced form: " << r0 << std::endl;
    
    test = (r0 += r1) += r1;
    std::cout << r0 << std::endl;
    reduce (r0);
    //when the two fractions are == with one in a reduced form
    if (test == r0 && (test.n != r0.n || test.d != r0.d))
        std::cout << "Reduced form: " << r0 << std::endl;
}


void test_decrement_f()
{
    Fraction test = get_Fraction(0, 0);
    int n0 = 0, d0 = 0, n1 = 0, d1 = 0;
    std::cin >> n0 >> d0 >> n1 >> d1;
    Fraction r0 = get_Fraction(n0, d0);
    Fraction r1 = get_Fraction(n1, d1);
    
    test = r0 -= r1;
    std::cout << r0 << std::endl;
    reduce (r0);
    //when the two fractions are == with one in a reduced form
    if (test == r0 && (test.n != r0.n || test.d != r0.d))
        std::cout << "Reduced form: " << r0 << std::endl;
    
    test = (r0 -= r1) -= r1;
    std::cout << r0 << std::endl;
    reduce (r0);
    //when the two fractions are == with one in a reduced form
    if (test == r0 && (test.n != r0.n || test.d != r0.d))
        std::cout << "Reduced form: " << r0 << std::endl;
    
}


void test_multiply_f()
{
    Fraction test = get_Fraction(0, 0);
    int n0 = 0, d0 = 0, n1 = 0, d1 = 0;
    std::cin >> n0 >> d0 >> n1 >> d1;
    Fraction r0 = get_Fraction(n0, d0);
    Fraction r1 = get_Fraction(n1, d1);
    
    test = r0 *= r1;
    std::cout << r0 << std::endl;
    reduce (r0);
    //when the two fractions are == with one in a reduced form
    if (test == r0 && (test.n != r0.n || test.d != r0.d))
        std::cout << "Reduced form: " << r0 << std::endl;
    
    test = (r0 *= r1) *= r1;
    std::cout << r0 << std::endl;
    reduce (r0);
    //when the two fractions are == with one in a reduced form
    if (test == r0 && (test.n != r0.n || test.d != r0.d))
        std::cout << "Reduced form: " << r0 << std::endl;
    
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
            
        case 10:
            test_get_n();
            break;
            
        case 11:
            test_get_d();
            break;
            
        case 12:
            test_set_n();
            break;
            
        case 13:
            test_set_d();
            break;
            
        case 14:
            test_set();
            break;
            
        case 15:
            test_int();
            break;
            
        case 16:
            test_double();
            break;
            
        case 17:
            test_increment_f();
            break;
            
        case 18:
            test_decrement_f();
            break;
            
        case 19:
            test_multiply_f();
            break;
    }
    
    return 0;
}
