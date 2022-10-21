#include <iostream>
using namespace std;

int second_largest(int a[], int n)
{
    int max = -1, second_max = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            second_max = max;
            max = a[i];
        }
        else if (a[i] != max)
        {
            if (second_max == -1 || a[i] > second_max)
            {
                second_max = a[i];
            }
        }
    }
    return second_max;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << second_largest(a, n);

    return 0;
}