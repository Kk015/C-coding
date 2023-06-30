#include <iostream>
using namespace std;

int linear_search(int a[], int n)
{
    for (int i = 0; i < 11; i++)
    {
        if (a[i] == n)
        {
            cout << i;
        }
    }
}
int main()
{
    int a[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 5;
    linear_search(a, n);
}