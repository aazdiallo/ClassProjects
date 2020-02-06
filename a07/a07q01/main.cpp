/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdoul Diallo
 *
 * Created on October 28, 2018, 12:04 AM
 */

#include <cstdlib>
#include <iostream>
#include "Rational.h"

// Case 1
void test_input()
{
    Rational r;
    std::cin >> r;
    reduce (r);
    std::cout << r << std::endl;
}

// Case 2
void test_output()
{
    int n = 0, d = 0;
    std::cin >> n >> d;
    Rational v;
    v = Rational (n, d);
    reduce (v);
    std::cout << v << std::endl;
}

// Case 3
void test_reduce_method()
{
    Rational r;
    std::cin >> r;
    r.reduce();
    std::cout << r << std::endl;
}

// Case 4
void test_reduce_function()
{
    Rational r;
    std::cin >> r;
    reduce(r);
    std::cout << r << std::endl;
}

// Case 5
void test_abs_method()
{
    Rational r;
    std::cin >> r;
    r.abs();
    r.reduce();
    std::cout << r << std::endl;
}

// Case 6
void test_abs_function()
{
    Rational r;
    std::cin >> r;
    abs(r);
    reduce(r);
    std::cout << r << std::endl;
}

// Case 7
void test_eq()
{
    Rational r, s;
    std::cin >> r >> s;
    std::cout << (r == s) << std::endl;
}

// Case 8
void test_dif()
{
    Rational r, s;
    std::cin >> r >> s;
    std::cout << (r != s) << std::endl;
}

// Case 9
void test_greater()
{
    Rational r, s;
    std::cin >> r >> s;
    std::cout << (r > s) << std::endl;
}

// Case 10
void test_greater_eq()
{
    Rational r, s;
    std::cin >> r >> s;
    std::cout << (r >= s) << std::endl;
}

// Case 11
void test_less()
{
    Rational r, s;
    std::cin >> r >> s;
    std::cout << (r < s) << std::endl;
}

// Case 12
void test_less_eq()
{
    Rational r, s;
    std::cin >> r >> s;
    std::cout << (r <= s) << std::endl;
}

// Case 13
void test_plus_eq()
{
    Rational r, s;
    std::cin >> r >> s;
    Rational v = (r += s);
    v.reduce();
    std::cout << v << std::endl;
}

// Case 14
void test_minus_eq()
{
    Rational r, s;
    std::cin >> r >> s;
    Rational v = (r -= s);
    v.reduce();
    std::cout << v << std::endl;
}

// Case 15
void test_times_eq()
{
    Rational r, s;
    std::cin >> r >> s;
    Rational v = (r *= s);
    v.reduce();
    std::cout << v << std::endl;
}

// Case 16
void test_divide_eq()
{
    Rational r, s;
    std::cin >> r >> s;
    Rational v = (r /= s);
    v.reduce();
    std::cout << v << std::endl;
}

// Case 17
void test_unary_plus()
{
    Rational r;
    std::cin >> r;
    r.reduce();
    r.operator +();
    std::cout << r << std::endl;
}

// Case 18
void test_unary_minus()
{
    Rational r;
    std::cin >> r;
    r.reduce();
    r.operator -();
    std::cout << r << std::endl;
}

// Case 19
void test_binary_plus()
{
    Rational r, s;
    std::cin >> r >> s;
    Rational v;
    v = r.operator +(s);
    v.reduce();
    std::cout << v << std::endl;
}

// Case 20
void test_binary_minus()
{
    Rational r, s;
    std::cin >> r >> s;
    Rational v;
    v = r.operator -(s);
    v.reduce();
    std::cout << v << std::endl;
}

// Case 21
void test_times()
{
    Rational r, s;
    std::cin >> r >> s;
    Rational v;
    v = r.operator *(s) ;
    v.reduce();
    std::cout << v << std::endl;
}

// Case 22
void test_divide()
{
    Rational r, s;
    std::cin >> r >> s;
    Rational v;
    v = r.operator /(s);
    v.reduce();
    std::cout << v << std::endl;
}

// Case 23
void test_int()
{
    Rational r;
    std::cin >> r;
    reduce(r);
    std::cout << r.get_int() << std::endl;
}

// Case 24
void test_double()
{
    Rational r;
    std::cin >> r;
    reduce(r);
    std::cout << r.get_double() << std::endl;
}

// Case 25
void test_int_eq_R()
{
    int n = 0;
    Rational r;
    std::cin >> r >> n;
    reduce(r);
    std::cout << (n == r) << std::endl;
}

// Case 26
void test_int_dif_R()
{
    int n = 0;
    Rational r;
    std::cin >> r >> n;
    reduce(r);
    std::cout << (n != r) << std::endl;
}

// Case 27
void test_int_great_R()
{
    int n = 0;
    Rational r;
    std::cin >> r >> n;
    reduce(r);
    std::cout << (n > r) << std::endl;
}

// Case 28
void test_int_great_eq_R()
{
    int n = 0;
    Rational r;
    std::cin >> r >> n;
    reduce(r);
    std::cout << (n >= r) << std::endl;
}

// Case 29
void test_int_less_R()
{
    int n = 0;
    Rational r;
    std::cin >> r >> n;
    reduce(r);
    std::cout << (n > r) << std::endl;
}

// Case 30
void test_int_less_eq_R()
{
    int n = 0;
    Rational r;
    std::cin >> r >> n;
    reduce(r);
    std::cout << (n > r) << std::endl;
}

// Case 31
void test_plus_int_R()
{
    int n = 0;
    Rational r;
    std::cin >> r >> n;
    reduce(r);
    std::cout << (n += r) << std::endl;
}

// Case 32
void test_minus_int_R()
{
    int n = 0;
    Rational r;
    std::cin >> r >> n;
    reduce(r);
    std::cout << (n -= r) << std::endl;
}

// Case 33
void test_times_int_R()
{
    int n = 0;
    Rational r;
    std::cin >> r >> n;
    reduce(r);
    std::cout << (n *= r) << std::endl;
}

// Case 34
void test_divide_int_R()
{
    int n = 0;
    Rational r;
    std::cin >> r >> n;
    reduce(r);
    std::cout << (n /= r) << std::endl;
}

//  Case 35
void test_int_plus_R()
{
    int n = 0;
    Rational r, s;
    std::cin >> r >> n;
    reduce(r);
    s = (n + r);
    reduce(s);
    std::cout << s << std::endl;
}

//  Case 36
void test_int_minus_R()
{
    int n = 0;
    Rational r, s;
    std::cin >> r >> n;
    reduce(r);
    s = (n - r);
    reduce(s);
    std::cout << s << std::endl;
}

//  Case 37
void test_int_times_R()
{
    int n = 0;
    Rational r, s;
    std::cin >> r >> n;
    reduce(r);
    s = (n * r);
    reduce(s);
    std::cout << s << std::endl;
}

//  Case 38
void test_int_divide_R()
{
    int n = 0;
    Rational r, s;
    std::cin >> r >> n;
    reduce(r);
    s = (n / r);
    reduce(s);
    std::cout << s << std::endl;
}

// Case 39
void test_pow_member()
{
    int n = 0;
    Rational r, s;
    std::cin >> r >> n;
    reduce(r);
    s = r.pow(n);
    reduce (s);
    std::cout << s << std::endl;
}


// Case 40
void test_pow_non_member()
{
    int n = 0;
    Rational r, s;
    std::cin >> r >> n;
    reduce(r);
    s = pow(r, n);
    reduce(s);
    std::cout << s << std::endl;
}


int main() {

    int option = 0;
    std::cin >> option;
    switch (option)
    {
        case 1:
            test_input();
            break;
            
        case 2:
            test_output();
            break;
            
        case 3:
            test_reduce_method();
            break;
            
        case 4:
            test_reduce_function();
            break;
            
        case 5:
            test_abs_method();
            break;
            
        case 6:
            test_abs_function();
            break;
            
        case 7:
            test_eq();
            break;
            
        case 8:
            test_dif();
            break;
            
        case 9:
            test_greater();
            break;
            
        case 10:
            test_greater_eq();
            break;
            
        case 11:
            test_less();
            break;
            
        case 12:
            test_less_eq();
            break;
            
        case 13:
            test_plus_eq();
            break;
            
        case 14:
            test_minus_eq();
            break;
            
        case 15:
            test_times_eq();
            break;
            
        case 16:
            test_divide_eq();
            break;
            
        case 17:
            test_unary_plus();
            break;
            
        case 18:
            test_unary_minus();
            break;
            
        case 19:
            test_binary_plus();
            break;
            
        case 20:
            test_binary_minus();
            break;
            
        case 21:
            test_times();
            break;
            
        case 22:
            test_divide();
            break;
            
        case 23:
            test_int();
            break;
            
        case 24:
            test_double();
            break;
            
        case 25:
            test_int_eq_R();
            break;
            
        case 26:
            test_int_dif_R();
            break;
            
        case 27:
            test_int_great_R();
            break;
            
        case 28:
            test_int_great_eq_R();
            break;
            
        case 29:
            test_int_less_R();
            break;
            
        case 30:
            test_int_less_eq_R();
            break;
            
        case 31:
            test_plus_int_R();
            break;
            
        case 32:
            test_minus_int_R();
            break;
            
        case 33:
            test_times_int_R();
            break;
            
        case 34:
            test_divide_int_R();
            break;
            
        case 35:
            test_int_plus_R();
            break;
            
        case 36:
            test_int_minus_R();
            break;
            
        case 37:
            test_int_times_R();
            break;
            
        case 38:
            test_int_divide_R();
            break;
            
        case 39:
            test_pow_member();
            break;
            
        case 40:
            test_pow_non_member();
            break;
    }
    
    return 0;
}

