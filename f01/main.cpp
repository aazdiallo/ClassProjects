/* 
 * File:   main.cpp
 * Author: Abdoul Diallo
 *
 * Created on December 16, 2018, 4:28 AM
 */

#include <cstdlib>
#include <iostream>
#include "Deque.h"

int main() { 
    char arr[5] = {}; 
    Deque <char> a(arr, 5);
    a.print();
    //std::cout << a.get_size();
//    a.insert_tail('v');
//    //a.insert_tail('k');
    a.insert_tail('m');
//    a.insert_tail('p');
//    a.insert_tail('c');
    a.insert_tail('a');
    a.print();
//    a.insert_head('k');
//    a.insert_head('N');
//    a.get_size();
//    a.remove_tail();
//    a.remove_head();
////    a.remove_tail();
////    a.remove_tail();
//    std::cout << a.get_size();
//    //a.remove_head();
//    a.print();
    
//    std::cout << ".......................................\n"
//            "........................................";
//    
//    int ar[15] = {}; 
//    Deque <int> b(ar, 15);
//    
//    std::cout<< b.get_size() << "\n";
//    b.insert_head(7);
//    b.insert_tail(43);
//    std::cout<< b.get_size() << "\n";
//    b.remove_head();
//    b.remove_head();
//    b.remove_head();
//    b.print();
    
    return 0; 
}

