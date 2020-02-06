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

int opendoors(int n, int r)
{
    bool * open;
    // TODO: Allocate an array of n values for open to point to
    open = new bool[n];
    
    // You want open[i] to be true when door i is open.
    // Scan open left-and-right r times.
    int count = 0;
    for (int v = 1; v <= r; v++) // Number of runs
    {
        if(v % 2 != 0) // Odd runs
        {
            for (int i = 0; i < n; i += v)
            {
                //std::cout << "Odd runs: " << i << std::endl;
                open[i] = true; // Open doors
            }
            continue; // If this condition is met, continue to the next iteration
        }
        // 0 1 2 3 4 5 
        else if (v % 2 == 0) // Even runs
        {
            for (int i = n - 1; i >= 0 ; i -= v)
            {
                //std::cout << "Even runs: " << i << std::endl;
                open[i] = false; // Close doors
            }
            continue; // If this condition is met, continue to the next iteration
        }
    }
    // Count number of values in the array open points to
    // which are true
    
    for (int j = 0; j < n; j++)
                if (open[j] == true)
                    count++;
    
    // TODO: Deallocate the memory used by doors.
    delete [] open;
    
    return count;
}
int main()
{
    int n, r;
    std::cin >> n >> r;
    std::cout << opendoors(n, r) << std::endl;
    
    return 0;
}