/* 
 * File:   main.cpp
 * Author: Abdoul Diallo
 *
 * Created on September 16, 2018, 10:58 PM
 */

#include <iostream>
#include <string>
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

void test_str_chr()
{
char x[MAX_BUF];
char c;
std::cin.getline(x, MAX_BUF);
std::cin >> c;
std::cout << str_chr(x, c) << std::endl;
return;
}

void test_str_str()
{
    char x[MAX_BUF];
    char y[MAX_BUF];
    std::cin.getline(x, MAX_BUF);
    std::cin.getline(y, MAX_BUF);
    std::cout << str_str(x, y) << std::endl;
    return;
}

void test_str_lower()
{
    char x[MAX_BUF];
    char y[MAX_BUF];
    std::cin.getline(y, MAX_BUF);
    str_lower(x, y);
    return;
}

void test_str_tok()
{
    char x[MAX_BUF];
    char y[MAX_BUF];
    char delimiters[MAX_BUF];
    std::cin.getline(y, MAX_BUF);
    std::cin.getline(delimiters, MAX_BUF);
    bool b;
    std::cout << str_tok(x, y, delimiters) << std::endl;
    return;
}

void test_str_bot()
{
    char x[MAX_BUF];
    char y[MAX_BUF];
    std::cout <<"Hi, what is your name?" << std::endl;
    std::cin.getline(y, MAX_BUF);
    std::cout << "Hi " << str_extract_name(y, x) << ". How are you?" << std::endl;
    return;
}

void test_bot()
{
    char x[MAX_BUF];
    char y[MAX_BUF];
    test_str_bot(); //call the first function "Hi...user"
    std::cin.getline(y, MAX_BUF); // Sad or Happy
    std::string answer; 
    answer = str_extract_name(y, x); 
    greeting_user(answer); // Why are you happy or sad
  
}

void test_bot_advanced()
{
    char x[MAX_BUF];
    char y[MAX_BUF];
    std::string v;
    random_greeting(); // Generate a random greeting
    std::cin.getline(y, MAX_BUF); // Getting first user input
    v = str_extract_name(y, x);
    random_first_response(v);
    std::cin.getline(y, MAX_BUF); // Getting second user input
    v.clear();
    v = str_extract_name(y, x);
    v[0] = char (v[0] +32); //putting first letter in lowercase
    std::string k = v;
    
    if (v == "sad" || v == "miserable" || v == "depressed") // If user was sad
    {
        random_secondS_response(v);// Print a random sad message and ask why sad
        std::cin.getline(y, MAX_BUF);// Gets user input
        v.clear(); //clear string
        v = str_extract_middle (y);// Gets user response
        random_thirdS_response(v);// Print a random sad message
    }
        
    if (v == "happy") // If user was sad
    {
        random_secondH_response(v);// Print a random sad message and ask why sad
        std::cin.getline(y, MAX_BUF);// Gets user input
        v.clear(); //clear string
        v = str_extract_name (y, x);// Gets user response
        v[0] = char (v[0] +32); //putting first letter in lowercase
        random_thirdH_response(v);// Print a random sad message
    }
    
    else if (k != "sad" && k != "miserable" && k != "depressed" && k != "happy")
        std::cout << "I'm sorry but I don't understand what you mean..." << std::endl;
    
    return ;
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
        
    case 2:
        test_str_chr();
        
    case 3:
        test_str_str();
        break;
        
    case 4:
        test_str_lower();
        break;
        
    case 5:
        test_str_tok();
        break;
        
    case 6:
        test_str_bot();
        break;
        
    case 7:
        test_bot();
        break;
        
    case 8:
        test_bot_advanced();
        break;
        
}
    return 0;
}
