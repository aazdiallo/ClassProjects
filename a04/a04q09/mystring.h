/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mystring.h
 * Author: Abdoul Diallo
 *
 * Created on September 16, 2018, 11:07 PM
 */

#ifndef MYSTRING_H
#define MYSTRING_H
#include <string>
int str_len(char []);
void str_cat(char [], char []);
int str_cmp(char [], char []);
void str_cpy( char [], char []);
int str_chr(char x[], char c);
int str_str( char [], char []);
void str_lower( char [], char []);
bool str_tok(char x[], char y[], char delimiters[]);
void str_chat(char y[]);
std::string str_extract_name(char y[], char name[]);
std::string to_upper(char v[]);
std::string to_lower(char v[]);
void greeting_user(std::string);
std::string str_extract_middle(char y[]);
void random_greeting();
void random_first_response(std::string );
void random_secondS_response(std::string );
void random_secondH_response(std::string );
void random_thirdH_response(std::string );
void random_thirdS_response(std::string );


#endif /* MYSTRING_H */

