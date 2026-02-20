#ifndef REVERSE_HPP
#define REVERSE_HPP

#include <iostream>
#include <string>

//Reverse function
template <typename T>
void reverse_array(T* arr, int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        T placeHolder = arr[i];
        arr[i] = arr[j];
        arr[j] = placeHolder;
        i++;
        j--;
    }
}

//Printing the array reversed
template <typename T>
void print_array(const T* arr, int n)
{
    std::cout << "[";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
        if (i < n - 1) std::cout << ", ";
    }
    std::cout << "]\n";
}

#endif