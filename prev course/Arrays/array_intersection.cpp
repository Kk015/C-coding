#include <iostream>
using namespace std;

int array_intersection(int a[], int b[], int c, int d)
{
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
            }
        }
    }
}

int main()
{
    int a[5] = {1, 2, 3, 7, 5};
    int b[5] = {1, 2, 6, 7, 9};
    array_intersection(a, b, 5, 5);
}