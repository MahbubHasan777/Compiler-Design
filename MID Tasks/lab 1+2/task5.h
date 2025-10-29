// 5.	Find the average value of the elements of an array.

#ifndef TASK5_H
#define TASK5_H

#include <iostream>
using namespace std;

void task5(){
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the value of Array:";
    for(int i = 0; i < size; i++){
        cout << "Array["<<i<<"]: ";
        cin >> arr[i];
    }

    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    cout << (sum/size) << endl;
}

#endif