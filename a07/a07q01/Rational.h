/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rational.h
 * Author: Abdoul Diallo
 *
 * Created on October 31, 2018, 2:21 PM
 */
#include <iostream>
#ifndef RATIONAL_H
#define RATIONAL_H

/*Rational class
//[WRITE A COMPLETE DOCUMENTATION FOR THIS LIBRARY]
************************************************************************
*/
int GCD(int, int);
int sign(int);
class Rational
{
public:
    Rational(int a = 0, int b = 1) 
            : n(a), d(b)
            {}
    Rational(Rational & r) 
        : n(r.n), d(r.d)
        {}
    int get_n() const 
    { 
        return n; 
    }
    void set_n(int x)
    {
        n = x;
    }
    
    int get_d() const 
    { 
        return d; 
    }
    void set_d(int y)
    {
        d = y;
    }
    
    // reduce method
    void reduce();

    // Abs method cannot be a const method 
    void abs();
    
    // Checks if two rational functions are ==
    bool operator==(const Rational &) const;
    
    // Checks if two rational functions are !=
    bool operator!=(const Rational &) const;
    
    // Checks first rational is > the second 
    bool operator> (const Rational &) const;
    
    // Checks first rational is >= the second 
    bool operator>=(const Rational &) const;
    
    // Checks first rational is < the second 
    bool operator< (const Rational &) const;
    
    // Checks first rational is <= the second 
    bool operator<=(const Rational &) const;
    
    Rational & operator+=(const Rational &);
    Rational & operator-=(const Rational &);
    Rational & operator*=(const Rational &);
    Rational & operator/=(const Rational &);
    
    Rational operator+(); //const;
    Rational operator-(); //const;
    Rational operator+(const Rational &) const;
    Rational operator-(const Rational &) const;
    Rational operator*(const Rational &) const;
    Rational operator/(const Rational &) const;
    
    Rational pow(int) const;
    int get_int() const;
    double get_double() const;
    
    //operator int() const; // You need not implement this.
    // SEE COMMENTS BELOW
    //operator double() const; // You need not implement this.
    // SEE COMMENTS BELOW
    
    private:
    int n; // numerator
    int d; // denominator
};
    // Output Operator
    std::ostream & operator<<(std::ostream &, const Rational &);
    
    // Input Operator
    std::istream & operator>>(std::istream &, Rational &);
    
    // Reduce function
    void reduce(Rational &);
    
    // get int function
    int get_int(Rational &);
    
    // Absolute value function
    void abs(Rational &);
    
    Rational pow(const Rational &, int);
    
    // Operations with int on the left
    bool operator==(int, const Rational &);
    bool operator!=(int, const Rational &);
    bool operator> (int, const Rational &);
    bool operator>=(int, const Rational &);
    bool operator< (int, const Rational &);
    bool operator<=(int, const Rational &);
    // Above codes dones
    int & operator+=(int &, const Rational &);
    int & operator-=(int &, const Rational &);
    int & operator*=(int &, const Rational &);
    int & operator/=(int &, const Rational &);
    
    Rational operator+(int, const Rational &);
    Rational operator-(int, const Rational &);
    Rational operator*(int, const Rational &);
    Rational operator/(int, const Rational &);
    
    // Operations with double on the left
    // (This section is OPTIONAL. Once you implement the corresponding
    // functions for int, should should be able to do it very quickly for
    // double.
    /* */
//    bool operator==(double, const Rational &);
//    bool operator!=(double, const Rational &);
//    bool operator> (double, const Rational &);
//    bool operator>=(double, const Rational &);
//    bool operator< (double, const Rational &);
//    bool operator<=(double, const Rational &);
//    double & operator+=(double &, const Rational &);
//    double & operator-=(double &, const Rational &);
//    double & operator*=(double &, const Rational &);
//    double & operator/=(double &, const Rational &);
//    double operator+(double, const Rational &);
//    double operator-(double, const Rational &);
//    double operator*(double, const Rational &);
//    double operator/(double, const Rational &);
    /* */

#endif /* RATIONAL_H */

