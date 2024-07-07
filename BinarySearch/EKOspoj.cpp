#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool logicalpart(vector<int> a, int n, int k, int mid)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = a[i] - mid;

        if (temp > 0)
        {
            sum += temp;
        }
    }

    if (sum >= k)
    {
        return true;
    }

    return false;
}

int binarypart(vector<int> a, int n, int k)
{
    int ans = -1;
    int start = 0;
    int end = a[a.size() - 1];
    while (start <= end)
    {
        int mid = (start + end) >> 1;
        if (logicalpart(a, n, k, mid))
        {
            ans = mid;
            start = mid + 1;
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
    vector<int> a{4, 42, 40, 26, 46};
    int n = 5;
    int k = 20;
    sort(a.begin(), a.end());
    cout << binarypart(a, n, k) << endl;
}