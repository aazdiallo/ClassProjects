/*
 * Project Description: Prime factorization of a number
 * Author: Abdoul Diallo
 * FileName: main.cpp
 * Date: 2019-01-11
 * Time: 22:15
 */

#include <iostream>

bool isPrime (int p)
{
    int divisors = 0;
    bool prime = false;
    for (int i = 1; i <= p/2; i++)
        if (p % i == 0)
            ++divisors;

    if (divisors == 1)
        prime = true;

    return prime;
}

void primeFactor (int s)
{
    int repeated_factors = 0, iterate = 1;
    int prime_table [repeated_factors];

    while (iterate <= s)
    {
        if (isPrime(iterate))
        {
            while (s % iterate == 0)
            {
                prime_table[repeated_factors] = iterate;
                std::cout << prime_table[repeated_factors] << ' ';
                ++repeated_factors;
                s = s/iterate;
            }
        }
        ++iterate;
        
        if ((!(isPrime(s)) && (iterate > s) && (s != 1)) || (s == 1))
        {
            prime_table[repeated_factors] = s;
            repeated_factors++;
        }
    }
   
//    std::cout << "factors: " << repeated_factors << "\n";
//    for (int i = 0; i < repeated_factors; ++i)
//    {
//        std::cout << prime_table[i] << ' ';
//    }
//    std::cout << "\n";
    
    return;
}

int main() {
    int n = 0;
    do {
        std::cout << "Enter an integer!..." <<std::endl;
        std::cin >> n ;

        std::cin.clear(); // To clear the fail bit
        std::cin.ignore(); // To ignore error input
    }while ((!std::cin) || (std::cin.fail()));

    // Function call
    primeFactor(n);
    //std::cout << isPrime(n);

    return 0;
}