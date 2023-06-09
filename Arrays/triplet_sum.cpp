#include <iostream>
using namespace std;

int triplet_sum(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                if (n == a[i] + a[j] + a[k])
                {
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
                }
            }
        }
    }
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int n = 12;
    triplet_sum(a, n);
}