/*
 * Project Description: a02q03
 * Author: Abdoul Diallo
 * FileName: main.cpp
 * Date: 2019-01-24
 * Time: 14:07
 */
#include <iostream>
#include <cstdlib>

int f2 (int a, int b, int d, int n)
{
    int rest = 0, counter = 0;
    while (rest != 1)
    {
        if (n == 0)
            break;

        if (n % d == 0)
            rest = n / d;

        else
            rest = a * n + b;

        ++counter;
        n = rest;
    }

    return counter;
}

int f (int * &s, int a, int b, int d, int n0, int N)
{
    int passFail  = f2(a, b, d, n0);

    if (passFail > N)
        std::cout << "fail ";
    else
        std::cout << "pass " << passFail << ' ';

    //std::cout << n0 << ' ';
    int rest = 0, counter = 0;
    while (rest != 1)
    {
        if (n0 == 0)
            break;

        if (n0 % d == 0)
            rest = n0 / d;

        else
            rest = a * n0 + b;

        *(s + counter) = rest;
        std::cout << *(s + counter) << ' ';
        ++counter;
        n0 = rest;
    }
    
    return passFail;
}


int main() {
    int n0 = 0, n1 = 0, a = 0, b = 0, d = 0, N = 0;

    std::cin >>a >>b >>d >>n0 >>n1 >>N;
    
    if (n0 < n1)
    {
        do
        {
            std::cout << "N0: " << n0 << " N1: " << n1 << ' ';
            int arr[N];
            int *v;
            v = arr;
            std::cout << a << ' ' << b << ' '<< d << ' '
                      << n0 << ' ' << N << ' ';
            f(v, a, b, d, n0, N);

            ///verify that unnecessary values are not printed
//            if (f2(a, b, d, n0) < N)
//                N = f2(a, b, d, n0);
//
//            for (int i = 0; i < N; ++i)
//                std::cout << arr[i] << ' ';
            
            std::cout << '\n';
            ++n0;
        }while (n0 < n1 + 1);
    }

    return 0;
}