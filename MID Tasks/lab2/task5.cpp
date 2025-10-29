// 5.	Find the average value of the elements of an array.

#include <iostream>
using namespace std;

double avgOfArray(double arr[], int size){
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    return (sum/size);
}


int main()
{
    double arr[] = {151,5818,-151,5,-5,151};
    int size = sizeof(arr)/sizeof(arr[0]);

    double avg = avgOfArray(arr, size);

    cout << avg << endl;
    return 0;
}