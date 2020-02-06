/* 
 * File:   Deque.h
 * Author: Abdoul Diallo
 *
 * Created on December 16, 2018, 4:29 AM
 */

#ifndef DEQUE_H
#define DEQUE_H

template <typename T> 
class Deque { 
private: 
    T* x_; 
    int size_; 
    int capacity_;
    
public: 
    Deque(T arr[], int s); 
    void print(); 
    int get_size();
    void insert_head (T head);
    void remove_head();
    void insert_tail(T tail);
    void remove_tail();
    bool is_empty() const;
    bool is_full() const;
    
}; 
  
template <typename T> 
void Deque<T>::print() { 
    std::cout <<"[ ";
    for (int i = 0; i < size_; i++) 
    {
        std::cout << *(x_ + i);
        if (i < size_ -1)
            std::cout << ", "; 
    }
    std::cout <<" ]" <<std::endl; 
} 

template <typename T> 
Deque<T>::Deque(T arr[], int s) { 
    x_ = new T[s]; 
    capacity_ = s; 
    for(int i = 0; i < size_; i++) 
        x_[i] = arr[i]; 
}

template <typename T> 
int Deque<T>::get_size()
{
    return size_;
}

template <typename T>
bool Deque<T>::is_empty() const
{
    if (size_ == 0)
        return true;
    else
        return false;
}

template <typename T>
bool Deque<T>::is_full() const
{
    if (size_ == capacity_)
        return true;
    else
        return false;
}

template <typename T>
void Deque<T>::insert_tail(T tail)
{
    try
    {
        if(!(is_full()))
        {
            if (size_ == 0)
            {
                x_[0] = tail;
                size_++;
            }
            else if (size_ < capacity_)
            {
                x_[size_] = tail;
                size_++;
            }
        } 
        else
        {
            throw "overflow error!!! \n";
        }
    }
    catch (const char* msg) 
    {
        std::cerr << msg << std::endl;
    }  
}

template <typename T>
void Deque <T>::insert_head(T head)
{
    try
    {
        if(!(is_full()))
        {
            T temp;
            temp = x_[capacity_ - 1];
            for (int j = capacity_ - 2; j >= 0; j--)
            {
                x_[j+1] = x_[j];// shifting array to the right
            }
            x_[0]= head;
            size_++;
        }  
        
        else
            {
                throw "overflow error!!! \n";
            }
    }
    catch (const char* msg) 
    {
        std::cerr << msg << std::endl;
    }
}

template <typename T>
void Deque <T>::remove_head()
{
    try
    {
        if(!(is_empty()))
        {
            T temp;
            temp = x_[0];
            
            //Making the new array
            for (int i = 1; i <= size_; i++)
                x_[i-1] = x_[i];
            size_--;
        }  
        
        else
            {
                throw "underflow error!!! \n";
            }
    }
    catch (const char* msg) 
    {
        std::cerr << msg << std::endl;
    }
}

template <typename T>
void Deque <T>::remove_tail()
{
    try
    {
        if(!(is_empty()))
        {
            T temp;
            temp = x_[size_ - 1];
            
            T v = x_[size_-1];
            x_[size_ - 1] = 0;
            size_--;
        }  
        
        else
            {
                throw "underflow error!!! \n";
            }
    }
    catch (const char* msg) 
    {
        std::cerr << msg << std::endl;
    }
}

#endif /* DEQUE_H */

