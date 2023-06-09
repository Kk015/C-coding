#include <iostream>
using namespace std;

int sort_binary(int a[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        while (a[i] == 0)
            i++;
        while (a[j] == 1)
            j--;
        if (i < j)
        {
            a[i] = 0;
            a[j] = 1;
            i++;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int a[5] = {1, 1, 0, 0, 1};
    int n = 5;
    sort_binary(a, n);
}