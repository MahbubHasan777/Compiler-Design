// 6.	Find the minimum and maximum value of the elements of an array.

#include <iostream>
using namespace std;

int findMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min < arr[i])
            min = arr[i];
    }

    return min;
}
int findMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max > arr[i])
            max = arr[i];
    }

    return max;
}

int main()
{
    int arr[] = {151, 5818, -151, 5, -5, 151};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = findMin(arr, size);
    int max = findMax(arr, size);

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    return 0;
}