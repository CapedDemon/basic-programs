#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void swap(int array[], int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

int partition(int array[], int left, int right)
{
    int pivot = array[right]; // taking rightmost element as pivot
    int i = left - 1;
    for (int j = left; j < right; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(array, i, j);
        }
    }
    swap(array, i + 1, right);
    return i + 1;
}

void quicksort(int array[], int left, int right)
{

    if (left < right)
    {
        int pivot = partition(array, left, right);
        quicksort(array, left, pivot - 1);
        quicksort(array, pivot + 1, right);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    quicksort(array, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << ' ';
    }
}
