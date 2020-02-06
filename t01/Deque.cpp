/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdoul Diallo
 *
 * Created on October 13, 2018, 12:23 AM
 */

#include <iostream>
#include "Deque.h"

std::ostream & operator<<(std::ostream & cout, const Deque & dq)
{
    cout << dq.get_size() << " [ ";
    for (int i = 0; i < dq.get_size(); ++i)
        cout << dq[i] << " ";
    cout << "]";
return cout;
}