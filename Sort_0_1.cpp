#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &a)
{
    int i = 0;
    int j = a.size() - 1;
    while (i < j)
    {
        while (a[i] == 0)
        {
            i++;
        }
        while (a[j] == 1)
        {
            j--;
        }
        if (i < j)
        {
            a[i] = 0;
            a[j] = 1;
            i++;
            j--;
        }
    }
}

int main()
{
    vector<int> arr{0, 1, 0, 1, 1, 0, 0, 0, 1, 0};
    sort(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}