// 6.	Find the minimum and maximum value of the elements of an array.

#ifndef TASK6_H
#define TASK6_H
#include <iostream>
using namespace std;

int task6()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the value of Array:"<< endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min < arr[i])
            min = arr[i];
        if (max > arr[i])
            max = arr[i];
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}

#endif