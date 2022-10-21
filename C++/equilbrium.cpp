// C++ Program for Equilibrium index of an array

// Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.

#include <iostream>
using namespace std;

int equilbrium(int arr[], int size)
{
    int sum = 0;
    int leftsum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        sum -= arr[i];

        if (leftsum == sum)
        {
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
}

int main()
{

    int arr[] = {1, 2, 6, 4, 0, -1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << equilbrium(arr, size);

    return 0;
}
