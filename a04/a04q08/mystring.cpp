/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mystring.cpp
 * Author: Abdoul Diallo
 *
 * Created on September 16, 2018, 11:07 PM
 */
const int MAX_BUF = 1024;

#include "mystring.h"
#include <iostream>
#include <string>

    int str_len(char x[])
    {
        int len = 0;
        while (x[len] != '\0')
    {
        ++len;
    }
        return len;
    }
    void str_cat(char x[], char y[])
    {
        int xlen = str_len(x);
        int ylen = str_len(y);
        for (int i = 0; i <= ylen; ++i)
    {
        x[xlen + i] = y[i];
    }
        return;
    }
    
    // Comparing two chars
    int str_cmp(char x[], char y[])
    {
        int test = 0;
        while (x[test] == y[test])
        {
            if ((x[test] == '\0') || (y[test] == '\0'))
                break;
                test++;
        }
        if ((x[test] == '\0') && (y[test] == '\0'))
            return 0;
        else
            return 1;
        
    }
    
    void str_cpy(char x[], char y[])
    {
        int test = 0;
        while (y[test] != '\0')
        {
            x[test] =y[test];
            test++;
        }
    }
    
    int str_chr(char x[], char c)
    {
        int position = 0;
        int test = 0;
        while (x[test] != '\0')
        {
            if (x[test] == c)
            position = test;
            test++;
        }
        if (position != 0)
            return position;
        else
            return -1;
    }
    
    int str_str(char x[], char y[])
    {
        int xp = 0, yp = 0; //position of x and y
        while (x[xp] != '\0')
        {
            if (x[xp] == y[0])
            {
                yp = 1;
                while (y[yp] != '\0' && x[yp + xp] != '\0' && x[yp + xp] == y[yp])
                {
                    yp++;
                }
                if (y[yp] == '\0' && yp == str_len(y))
                    return xp;
            }
            xp++;
        }
        return -1;
    
    }
    
     void str_lower(char x[], char y[])
    {
         for (int i = 0; i < str_len(y); i++)
         {
             x[i] = tolower(y[i]);
         }
        std::cout << x << std::endl;
    }
     
       bool str_tok(char x[], char y[], char delimiters[])
    {
        int position = 0, iterate = 0;
    do
    {
        position = str_str(y, delimiters);
        if (position > 0) // If delimiters are in the y variable
        {
            for (int i = 0; i < position; i++)
                x[i] = y[i];
                for (int j = position + str_len(delimiters); j <= str_len(y); j++)
                {
                    y[iterate] = y[j];
                    iterate++;
                }
                iterate = 0;
                std::cout << x << std::endl;
                std::cout << y << std::endl;
                for (int k = 0; k < str_len(x); k++)
                 x[k] = ' ';
                position = str_str(y, delimiters);
                //return 1;
        }
        if (position < 0) // If delimiters are not in the y variable
            return -1;
        
    }while (position > 0);
    
return 0;
}
   //Putting the first character of the user's name in uppercase
   std::string to_upper(char v[])
       {
           v[0] = char(v[0] - 32);
           std::string m = v;
           
           return m;
       }   
   void greeting_user( char h[])
   {
       
   }
       
    std::string str_extract_name(char y[], char x [])
    {
        std::string name;
        memset(x, 0, 255);//Emptying the value of x before starting program
        
        int i = 0, len_name = 0;
        for (i = str_len(y); i > 0; i--)
        {
            if ((y[i] == ' ' || y[i] == '\t' || y[i] == '.') && y[i] != '\0')
            {
                continue;
            }
            else if (((y[i] >= 'a' && y[i] <= 'z') || (y[i] >= 'A' && y[i] <= 'Z')) && (y[i] != '\0'))
                {
                    int j = i;
                    while (j >= 0 && y[j] != ' ' )
                    {
                        if (y[j] != '\0' && y[j] != ' ')
                        {
                            len_name++;
                        } 
                        j--;
                    }
                break; // Exit the loop once entered at least once
                }
        }
        int k = i - len_name;
        while (k < str_len(y))
            {
                if ((y[k] >= 'a' && y[k] <= 'z') || (y[k] >= 'A' && y[k] <= 'Z'))
                name.push_back(y[k]);
                k++;
            } 
        std::strcpy(x, name.c_str());
    return to_upper(x);
}
     
    
    void greeting_user(std::string m)
    {
        char x[MAX_BUF];
        char y[MAX_BUF];
        m[0] = char (m[0] +32); //putting first letter in lowercase
        
            if (m == "happy")
            {
                std::cout <<"I'm glad to hear that. Why are you " << m << '?' << std::endl;
                std::cin.getline(y, MAX_BUF);
                m = str_extract_name (y, x);
                m[0] = char (m[0] +32); //putting first letter in lowercase
                std::cout << "I'm glad. Tell me about your " << m << std::endl;
            }
        
            else if (m == "sad")
            {
                std::cout <<"I'm sorry to hear that. Why are you " << m << '?' << std::endl;
                std::cin.getline(y, MAX_BUF);
                std::cout << "I'm sorry. Tell me about your " << str_extract_middle (y, x) << std::endl;
            }
               
            else if (m == "depressed")
                std::cout <<"I'm sorry to hear that. Why are you " << m << '?' << std::endl;
                
            else if (m == "miserable")
                std::cout <<"I'm sorry to hear that. Why are you " << m << '?' << std::endl;
                
            else
                std::cout << "I'm sorry but I don't understand what you mean." << std::endl;
            
        return ;        
    }

    std::string str_extract_middle(char y[], char x[])
    {
      memset(x, 0, 255);
        std::string name;
        int j = 0, i = 0, len_name = 0, len = 0, ivalue = 0;
        for (i = 0; i < str_len(y); i++)
        {
            // Ignore everything that is not a character at the beginning of the string
            if (((y[i] >= 'a' && y[i] <= 'z') || (y[i] >= 'A' && y[i] <= 'Z')) && (y[i] != '\0'))
                {  
                    j = i;
                    while (j < str_len(y)) // Start looping from the first alphabet found
                    {
                        if ( y[j] == ' ') //If loop is at end of first word
                        {   
                            int secondword = 0;
                            for (secondword = j+1; secondword < str_len(y); secondword++)
                            {   
                                if (y[secondword] == ' ')
                                    continue;
                                //Ignore everything that is not a character at the beginning of the second word
                                if (((y[secondword] >= 'a' && y[secondword] <= 'z') || (y[secondword] >= 'A' && y[secondword] <= 'Z')) && y[secondword] != '\0')
                                {   
                                    for (int h = secondword; h < str_len(y); h++)
                                        if (y[h] == ' ')
                                            return name;
                                        else
                                        name.push_back(y[h]);
                                }
                            }
                        }
                        j++;
                        } 
                    } 
                }
    return 0;

}

    
    