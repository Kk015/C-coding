#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a{12, 16, 22, 35, 39, 42, 45, 48, 50, 53, 55, 56};
    int k = 4, x = 35;
    int l = 0, h = a.size() - 1;
    while (h - l >= k)
    {
        if (x - a[l] > a[h] - x)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    for (int i = l; i <= h; i++)
    {
        cout << a[i] << endl;
    }
}