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

    if (n > 0)
    {
        std::cout << arr[0];
        for (int i = 1; i < n; i++)
        {
            std::cout << ", " << arr[i];
        }
    }

    std::cout << "]\n";
}

#endif