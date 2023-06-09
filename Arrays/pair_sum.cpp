#include <iostream>
using namespace std;

int pair_sum(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (n == a[i] + a[j])
            {
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }
}
int main()
{
    int n = 5;
    int a[5] = {1, 2, 3, 4, 5};
    pair_sum(a, n);
}