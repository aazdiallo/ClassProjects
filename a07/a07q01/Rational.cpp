/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "Rational.h"

// reduce method
// Case 3
void Rational::reduce()
{   
    if(get_d() != 0 && get_n() != 0)// If Numerator and Denominator != 0
    {
        if (get_d() < 0 && get_n() < 0)// If Numerator and Denominator < 0
        {   
            //Convert Numerator and Denominator to positive values
            set_d(get_d() * -1);
            set_n(get_n() * -1); 
            
            if (get_d() > get_n())
            {
                for (int i = get_d(); i > 0; i--)
                {
                    // If there exist a common factor
                    if (get_d() % i == 0 && get_n() % i == 0)
                    {
                        set_d(get_d() / i);
                        set_n(get_n() / i);
                    }
                }
            }
            else if (get_d() < get_n())
            {
                for (int i = get_n(); i > 0; i--)
                {
                        // If there exist a common factor
                    if (get_d() % i == 0 && get_n() % i == 0)
                    {
                        set_d(get_d() / i);
                        set_n(get_n() / i);
                    }
                }
            }
        }
        else if (get_d() > get_n())
        {
            for (int i = get_d(); i > 0; i--)
                {
                    // If there exist a common factor
                    if (get_d() % i == 0 && get_n() % i == 0)
                    {
                        set_d(get_d() / i);
                        set_n(get_n() / i);
                    }
                }
        }

        else if (get_d() < get_n())
            {
                for (int i = get_n(); i > 0; i--)
                {
                        // If there exist a common factor
                    if (get_d() % i == 0 && get_n() % i == 0)
                    {
                        set_d(get_d() / i);
                        set_n(get_n() / i);
                    }
                }
            }
        
        else // If numerator is equal to denominator
        {
            set_d(1);
            set_n(1);
        }
    }
}

// Reduce function
// Case 4
void reduce( Rational & v)
{   
    if(v.get_d() != 0 && v.get_n() != 0)// If Numerator and Denominator != 0
    {
        if (v.get_d() < 0 && v.get_n() < 0)// If Numerator and Denominator < 0
        {   
            //Convert Numerator and Denominator to positive values
            v.set_d(v.get_d() * -1);
            v.set_n(v.get_n() * -1); 
        }
        
        else if (v.get_d() < 0 && v.get_n() > 0)// If Denominator < 0
        {   
            //Convert Denominator to positive a value
            //Numerator to negative
            v.set_d(v.get_d() * -1);
            v.set_n(v.get_n() * -1);
        }
        
        else if (v.get_d() > 0 && v.get_n() < 0)// If Denominator < 0
        {   
            // Do nothing
        }
        
            if (v.get_d() > v.get_n())
            {
                for (int i = v.get_d(); i > 0; i--)
                {
                    // If there exist a common factor
                    if (v.get_d() % i == 0 && v.get_n() % i == 0)
                    {
                        v.set_d(v.get_d() / i);
                        v.set_n(v.get_n() / i);
                    }
                }
            }
            else if (v.get_d() < v.get_n())
            {
                for (int i = v.get_n(); i > 0; i--)
                    {
                        // If there exist a common factor
                        if (v.get_d() % i == 0 && v.get_n() % i == 0)
                    {
                        v.set_d(v.get_d() / i);
                        v.set_n(v.get_n() / i);
                    }
                }
            }
        else if (v.get_d() == v.get_n())// If numerator is equal to denominator
        {
            v.set_d(1);
            v.set_n(1);
        }
    }
    //If numerator is equal to zero
    else if (v.get_n() == 0)
    {
        v.set_d(1);
        v.set_n(0);
    }
    
    //If denominator is equal to zero
    else if (v.get_d()== 0)
    {
        // Do nothing
    }
}

// Operator <<
std::ostream & operator<<(std::ostream & cout, const Rational & r)
{
    // TODO
    // If numerator is equal to 0 then Rational is 0
    if (r.get_n() == 0)
        cout << r.get_n();
    
    // If denominator is equal to 0 then Rational is undefined
    else if (r.get_d() == 0)
        cout << "undefined";
    
    // If denominator is equal to 1 then Rational is equal to numerator
    else if (r.get_d() == 1)
        cout << r.get_n();
    
    // If Rational is any real #s other than the above ones
    else
        cout << r.get_n() << '/' << r.get_d() ;

    return cout;
}

// Operator >>
std::istream & operator>>(std::istream & cin, Rational & r)
{
//// TODO
    int x = 0, y = 0;
    cin >> x >> y;
    r.set_n(x);
    r.set_d(y);
    
return cin;
}

// abs method
// Case 5
void Rational::abs()
    {
        // If Numerator and Denominator < 0
        if (get_n() < 0 && get_d() < 0)
        {
            set_d(get_d() * -1);
            set_n(get_n() * -1);
        }
        
        // If Numerator < 0
        else if (get_n() < 0 && get_d() > 0)
        {
            set_n(get_n() * -1);
        }
        
        // If Denominator < 0
        else if (get_n() > 0 && get_d() < 0)
        {
            set_d(get_d() * -1);
        }
        
        // If Numerator and Denominator > 0
        else
        {
            // Do nothing
        }
    }


// abs function
// Case 6
void abs(Rational & r)
{
// If Numerator and Denominator < 0
        if (r.get_n() < 0 && r.get_d() < 0)
        {
            r.set_d(r.get_d() * -1);
            r.set_n(r.get_n() * -1);
        }
        
        // If Numerator < 0
        else if (r.get_n() < 0 && r.get_d() > 0)
        {
            r.set_n(r.get_n() * -1);
        }
        
        // If Denominator < 0
        else if (r.get_n() > 0 && r.get_d() < 0)
        {
            r.set_d(r.get_d() * -1);
        }
        
        // If Numerator and Denominator > 0
        else
        {
            // Do nothing
        }
}

    // Check if f == s
    // Case 7
bool Rational::operator==(const Rational & s) const
    {
    //return n * s.get_d() == d * s.get_n();
        if (get_n() * s.get_d() == get_d() * s.get_n())
           return true;
       else
           return false;   
    }
    
    
    // Check if f != s
    // Case 8
bool Rational::operator!=(const Rational & s) const
    {
        return !(*this == s);   
    }
    
    // Check if f > s
    // Case 9
bool Rational::operator> (const Rational & s) const
    {
        if (get_n() * s.get_d() > get_d() * s.get_n())
           return true;
       else
           return false; 
    }

    // Check if f >= s
    // Case 10
bool Rational::operator>= (const Rational & s) const
    {
        if (get_n() * s.get_d() >= get_d() * s.get_n())
           return true;
       else
           return false; 
    }
    
    
    // Check if f < s
    // Case 11
bool Rational::operator< (const Rational & s) const
    {
        return !(*this > s); 
    }
    
    
    // Check if f <= s
    // Case 12
bool Rational::operator<= (const Rational & s) const
    {
        if (get_n() * s.get_d() <= get_d() * s.get_n())
           return true;
       else
           return false;  
    }

    // Add an object to the calling object
    // Case 13
Rational & Rational::operator+=(const Rational & s)
{
    set_n ((n * s.d) + (d * s.n));
    set_d (d * s.d);
    
    return *this;
}

    // Substract an object to the calling object
    // Case 14
Rational & Rational::operator-=(const Rational & s)
{
    set_n ((n * s.d) - (d * s.n));
    set_d (d * s.d);
    
    return *this;
}

    // Substract an object to the calling object
    // Case 15
Rational & Rational::operator*=(const Rational & s)
{
    n *= s.n;
    d *= s.d;
    
    return *this;
}

    // Substract an object to the calling object
    // Case 16
Rational & Rational::operator/=(const Rational & s)
{
    n *= s.d;
    d *= s.n;
    
    return *this;
}

    // Unary + operator
    // Case 17
Rational Rational::operator+()
{
    if (get_n() < 0)
        set_n(get_n() * (-1));
    
    return *this;    
}

    // Unary - operator
    // Case 18
Rational Rational::operator-()
{
    if (get_n() > 0)
        set_n(get_n() * (-1));
    
    return *this;
}

    // Binary + operator
    // Case 19
Rational Rational::operator+(const Rational & s) const
{
    Rational v;
    v.n = get_n() * s.d + get_d() * s.n;
    v.d = get_d() * s.d;
    
    return v;
}

    // Binary - operator
    // Case 20
Rational Rational::operator-(const Rational & s) const
{
    Rational v;
    v.n = get_n() * s.d - get_d() * s.n;
    v.d = get_d() * s.d;
    
    return v;
}

    // Binary / operator
    // Case 22
Rational Rational::operator/(const Rational & s) const
{
    Rational v;
    v.n = n * s.d;
    v.d = d * s.n;
    
    return v;
}

    // Binary * operator
    // Case 21
Rational Rational::operator*(const Rational & s) const
{
    Rational v;
    v.n = n * s.n;
    v.d = d * s.d;
    
    return v;
}

    // Return the int value of the rational
    // Case 23
int Rational::get_int() const
{
    return int(get_n()) / int (get_d());
}


int get_int(Rational & r)
{
    return int(r.get_n()) / int (r.get_d());
}

    // Return the double value of the rational
    // Case 24
double Rational::get_double() const
{
    return double(get_n()) / double(get_d());
}

// Power method
// Case 40
Rational Rational::pow(int x) const
{
    Rational v;
    v.n = n;
    v.d = d;
    if (x == 0)
    {
        v.n = 1;
        v.d = 1;
        return v; 
    }
    
    else if (x == 1)
        return v = *this;
    
    else if (x == -1)
    {
        int l = v.n;
        v.n = d;
        v.d = l;
        return v;
    }
    
    else if (x >= 2)
    {
        for (int i = 1; i < x; i++)
        {
            v.n *= n;
            v.d *= d;
        }
        return v;
    }
    
    else if (x <= -2)
    {
        x *= (-1); //convert n to positive
        for (int i = 1; i < x; i++)
        {
            v.n *= n;
            v.d *= d;
        }
        int l = v.n;
        v.n = v.d;
        v.d = l;
        return v;
    }
    return v;
}

// Pow function
// Case 39
Rational pow(const Rational & s, int x)
{
    Rational v;
    v.set_n(s.get_n());
    v.set_d(s.get_d());
    if (x == 0)
    {
        v.set_n(1);
        v.set_d(1);
        return v; 
    }
    
    else if (x == 1)
        return v = s;
    
    else if (x == -1)
    {
        int l = s.get_n();
        v.set_n(s.get_d()) ;
        v.set_d(l);
        return v;
    }
    
    else if (x >= 2)
    {
        for (int i = 1; i < x; i++)
        {
            v.set_n(v.get_n() * s.get_n());
            v.set_d(v.get_d() * s.get_d());
        }
        return v;
    }
    
    else if (x <= -2)
    {
        x *= (-1); //convert n to positive
        for (int i = 1; i < x; i++)
        {
            v.set_n(v.get_n() * s.get_n());
            v.set_d(v.get_d() * s.get_d());
        }
        int l = v.get_n();
        v.set_n(v.get_d());
        v.set_d(l);
        return v;
    }
    return v;
}

// Compare an int to a rational
// Case 25
bool operator==(int x, const Rational & r)
{
    return ((r.get_n() / r.get_d()) == x);
}

// Compare an int to a rational
// Case 26
bool operator!=(int x, const Rational & r)
{
    return !(r == x);
}

// Compare an int to a rational
// Case 27
bool operator>(int x, const Rational & r)
{
    return (x > (r.get_n() / r.get_d()));
}

// Compare an int to a rational
// Case 28
bool operator>=(int x, const Rational & r)
{
    return (x >= (r.get_n() / r.get_d()));
}

// Compare an int to a rational
// Case 29
bool operator<(int x, const Rational & r)
{
    return (x < (r.get_n() / r.get_d()));
}

// Compare an int to a rational
// Case 30
bool operator<=(int x, const Rational & r)
{
    return (x <= (r.get_n() / r.get_d()));
}

// Compare an int to a rational
// Case 31
int & operator+=(int & x, const Rational & r)
{
    Rational v;
    v = x + r;
    x = get_int (v);
    return x;
}

// Compare an int to a rational
// Case 32
int & operator-=(int & x, const Rational & r)
{
    Rational v;
    v = x - r;
    x = get_int (v);
    return x;
}

// Compare an int to a rational
// Case 33
int & operator*=(int & x, const Rational & r)
{
    Rational v;
    v = x * r;
    x = get_int (v);
    return x;
}

// Compare an int to a rational
// Case 34
int & operator/=(int & x, const Rational & r)
{
    Rational v;
    v = x / r;
    x = get_int (v);
    return x;
}

// Compare an int to a rational
// Case 35
Rational operator+(int x, const Rational & r)
{
    Rational s;
    s.set_n((r.get_d() * x) + r.get_n());
    s.set_d(r.get_d());
    return s;
}

// Compare an int to a rational
// Case 36
Rational operator-(int x, const Rational & r)
{
    Rational s;
    s.set_n((r.get_d() * x) - r.get_n());
    s.set_d(r.get_d());
    return s;
}

// Compare an int to a rational
// Case 37
Rational operator*(int x, const Rational & r)
{
    Rational s;
    s.set_n(r.get_n() * x);
    s.set_d(r.get_d());
    return s;
}

// Compare an int to a rational
// Case 38
Rational operator/(int x, const Rational & r)
{
    Rational s;
    s.set_n(r.get_d() * x);
    s.set_d(r.get_n());
    return s;
}