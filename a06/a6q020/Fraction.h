/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fraction.h
 * Author: Abdoul Diallo
 *
 * Created on October 24, 2018, 9:48 AM
 */

#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

// Struct function
struct Fraction
{
    int n;
    int d;
    
};


// Operator<<
std::ostream & operator<<(std::ostream & cout, const Fraction &);

// Reducible 
void reduce( Fraction &);

// Operator+
Fraction operator+(const Fraction &, const Fraction &);

// Operator-
Fraction operator-(const Fraction &, const Fraction &);

// Operator*
Fraction operator*(const Fraction &, const Fraction &);

// Operator/
Fraction operator/(const Fraction &, const Fraction &);

// Operator==
bool operator==(const Fraction & f, const Fraction & s);

// Operator!=
bool operator!=(const Fraction & f, const Fraction & s);

// return a fraction of form a/b
Fraction get_Fraction(int a, int b);

// return the numerator of a fraction
int get_Fraction_n(const Fraction & f);

// return the denominator of a fraction
int get_Fraction_d(const Fraction & f);

// set the numerator of a fraction
int set_n(Fraction & f, int n);

// set the denominator of a fraction
int set_d(Fraction & f, int d);

// set numerator and denominator of a fraction to n/d
Fraction set(Fraction & f, int n, int d);

// return the double value of the fraction
int get_int (const Fraction &);

// return the double value of the fraction
double get_double (const Fraction &);

// Increment a fraction by another fraction
Fraction & operator+=( Fraction &, const Fraction &);

// Decrement a fraction by another fraction
Fraction & operator-=( Fraction &, const Fraction &);

// Multiply a fraction by another fraction
Fraction & operator*=( Fraction &, const Fraction &);

// Divide a fraction by another fraction
Fraction & operator/=( Fraction &, const Fraction &);

#endif /* FRACTION_H */

