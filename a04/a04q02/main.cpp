/* 
 * File:   main.cpp
 * Author: Abdoul Diallo
 *
 * Created on September 16, 2018, 10:58 PM
 */

#include <iostream>
#include <limits>
#include "mystring.h"


const int MAX_BUF = 1024;

void test_str_cmp()
{
    char s[MAX_BUF];
    char t[MAX_BUF];
    std::cin.getline(s, MAX_BUF);
    std::cin.getline(t, MAX_BUF);
    std::cout << str_cmp(s, t) << std::endl;
}

void test_str_cpy()
{
    char x[MAX_BUF];
    char y[MAX_BUF];
    std::cin.getline(y, MAX_BUF);
    str_cpy(x, y);
    std::cout << x << std::endl;
    return;
}

int main()
{
    int i = 0;
    std::cin >> i;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
switch (i)
{
    case 0:
        test_str_cmp();
        break;
        
    case 1:
        test_str_cpy();
        break;
}
    return 0;
}
