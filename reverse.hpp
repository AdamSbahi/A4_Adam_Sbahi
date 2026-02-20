#ifndef REVERSE_HPP
#define REVERSE_HPP

#include <iostream>
#include <string>

using namespace std;

//Reverse for int
void reverse_array(int* arr, int n)
{
    int i = 0;
    int j = n-1;
    
    while (i < j){
        {
            int placeHolder = arr[i];
            arr[i] = arr[j];
            arr[j] = placeHolder;
            i++;
            j--;
        }

    }
}

//Reverse for double
void reverse_array(double* arr, int n)
{
    int i = 0;
    int j = n-1;
    
    while (i < j){
        {
            double placeHolder = arr[i];
            arr[i] = arr[j];
            arr[j] = placeHolder;
            i++;
            j--;
        }

    }
}

//Reverse for char
void reverse_array(char* arr, int n)
{
    int i = 0;
    int j = n-1;
    
    while (i < j){
        {
            char placeHolder = arr[i];
            arr[i] = arr[j];
            arr[j] = placeHolder;
            i++;
            j--;
        }

    }
}

//Reverse for string
void reverse_array(string* arr, int n)
{
    int i = 0;
    int j = n-1;
    
    while (i < j){
        {
            string placeHolder = arr[i];
            arr[i] = arr[j];
            arr[j] = placeHolder;
            i++;
            j--;
        }

    }
}

#endif