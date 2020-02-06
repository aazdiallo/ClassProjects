/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "Fraction.h"

// Reducible fraction
void nonReducible( Fraction & v)
{   
    if(v.d != 0 && v.n != 0)// If Numerator and Denominator != 0
    {
        if (v.d < 0 && v.n < 0)// If Numerator and Denominator < 0
        {   
            //Convert Numerator and Denominator to positive values
            v.d *= -1;
            v.n *= -1;
            
            if (v.d > v.n)
            {
                for (int i = v.d; i > 0; i--)
                {
                    // If there exist a common factor
                    if (v.d % i == 0 && v.n % i == 0)
                    {
                        v.d /= i;
                        v.n /= i;
                    }
                }
            }
            else if (v.d < v.n)
            {
                for (int i = v.n; i > 0; i--)
                    {
                        // If there exist a common factor
                        if (v.d % i == 0 && v.n % i == 0)
                        {
                            v.d /= i;
                            v.n /= i;
                        }
                    }
            }
        }
        else if (v.d > v.n)
        {
            for (int i = v.d; i > 0; i--)
            {
                // If there exist a common factor
                if (v.d % i == 0 && v.n % i == 0)
                {
                    v.d /= i;
                    v.n /= i;
                }
            }
        }

        else if (v.d < v.n)
        {
            for (int i = v.n; i > 0; i--)
            {
                // If there exist a common factor
                if (v.d % i == 0 && v.n % i == 0)
                {
                    v.d /= i;
                    v.n /= i;
                }
            }
        }
        
        else // If numerator is equal to denominator
        {
            v.d = v.n = 1;
        }
    }
}

// Operator <<
std::ostream & operator<<(std::ostream & cout, const Fraction & r)
{
    //cout << "Reducible test result: Numerator: " << r.n << ", Denominator: " << r.d << "\n";
    
    if (r.d != 1 && r.d != -1)
    { 
        //cout << "Denominator != 1/ -1" << "\n";
        if (r.n > 0 && r.d > 0)
            cout << r.n << '/' << r.d;

        else if (r.n == 0)
            cout << r.n;

        else if (r.d == 0)
            cout << "undefined";

        else if (r.n < 0 && r.d < 0)
            cout << (-1) * r.n << '/' << (-1) * r.d ;

        else if (r.n < 0 && r.d > 0)
            cout << r.n << '/' << r.d;

        else if (r.n > 0 && r.d < 0)
            cout << (-1) * r.n << '/' << (-1) * r.d;
    }
    
    else if (r.d == 1)// Return n when d == 1
        cout << r.n;
    
    else if (r.d == -1)
        cout << (-1) * r.n; // Return -n when d == -1
    
    return cout;
}


// Operator+
Fraction operator+(const Fraction & f, const Fraction & s)
{
    Fraction sum;
    sum.n = (f.n * s.d) + (f.d * s.n);
    sum.d = (f.d * s.d);
    
    return sum;
}


// Operator-
Fraction operator-(const Fraction & f, const Fraction & s)
{
    Fraction subract;
    subract.n = (f.n * s.d) - (f.d * s.n);
    subract.d = (f.d * s.d);
    
    return subract;
}


// Operator*
Fraction operator*(const Fraction & f, const Fraction & s)
{
    Fraction multiply;
    multiply.n = (f.n * s.n);
    multiply.d = (f.d * s.d);
    
    return multiply;
}


// Operator/
Fraction operator/(const Fraction & f, const Fraction & s)
{
    Fraction devide;
    devide.n = (f.n * s.d);
    devide.d = (f.d * s.n);
    
    return devide;
}