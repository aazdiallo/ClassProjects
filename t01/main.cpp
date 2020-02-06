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

#include <cstdlib>
#include <iostream>
#include "Deque.h"


void print(const Deque & deque)
{
static int i = 1;
        std::cout << i << ". " << deque << ", empty: " << deque.is_empty()
        << ", full: " << deque.is_full();
        i++;
}
void test_remove_head(Deque & deque)
{
    int x = deque.remove_head();
    print(deque); std::cout << ", x: " << x << "\n";
}


void test_remove_tail(Deque & deque)
{
    int x = deque.remove_tail();
    print(deque); std::cout << ", x: " << x << "\n";
}


void test_insert_tail(Deque & deque, int x)
{
    deque.insert_tail(x);
    print(deque); std::cout << "\n";
}


void test_insert_head(Deque & deque, int x)
{
    deque.insert_head(x);
    print(deque); std::cout << "\n";
}

void test_operator(Deque & deque, int x)
{
    std::cout <<"x[" << x << "]: " << deque.operator [](x) << "\n";
}


void test1()
{
    Deque deque; 
    print(deque); 
    std::cout << "\n";
    test_remove_tail(deque);
    test_remove_head(deque);
    test_insert_tail(deque, 5);
    test_insert_head(deque, 7);
    test_insert_tail(deque, 9);
    test_insert_head(deque, 13);
    
    test_operator(deque, 1);
    
    test_insert_tail(deque, 8);
    
    test_insert_head(deque, 3);
    test_insert_head(deque, 9);
    test_insert_tail(deque, 0);
    
    test_remove_head(deque);
    test_remove_tail(deque);
    test_remove_tail(deque);
    test_remove_tail(deque);
    test_remove_head(deque);
    test_remove_head(deque);
    test_remove_head(deque);
}
void test2()
{
    Deque deque;
    for (int i=0; i<15; i++) test_insert_head(deque, i);
    for (int i=0; i<15; i++) test_remove_tail(deque);
}
int main() {

    test1();
    test2();
    
    return 0;
}

