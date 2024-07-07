#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool logicpart(vector<int> arr, int n, int k, int mid)
{
    int c = 1;
    int pos = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] - pos >= mid)
        {
            c++;
            pos = arr[i];
        }
        if (c == k)
        {
            return true;
        }
    }

    return false;
}

int binarypart(vector<int> arr, int n, int k)
{
    int ans = -1;
    int start = 0, end = arr[arr.size() - 1] - arr[0];
    while (start <= end)
    {
        int mid = (start + end) >> 1;

        if (logicpart(arr, n, k, mid))
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr{1, 2, 4, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << binarypart(arr, n, k) << endl;
}