/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdoul Diallo
 *
 * Created on September 26, 2018, 8:29 PM
 */

#include <iostream>

int pi( double n)
{
    int * i = new int;
    *i = 1;
    
    int * j = new int;
    *j = 1;
    
    int * numprimes = new int;
    *numprimes = 0;
    
    int ret = 0;
    
  for(*i = 2; *i <= n; ++(*i)) // Looping from 2 to n
  {
      *numprimes = 0; // Re-initializing the prime counter for every iteration
      for(*j = 1; *j <= *i; ++(*j))
      {     
        if(*i % *j == 0)// Count the numbers that divide x
            *numprimes += 1;
      }
      if (*numprimes <= 2) // If there were only two divisors
          ret += 1; // Counting the number of prime number
  }
    // Deallocating memory
    delete i;
    delete j;
    delete numprimes;
    
  return ret;
}

int main()
{
    int n = 0;
    std::cin >> n;
    std::cout << pi(n) << '\n';
    
    return 0;
}

