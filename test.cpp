#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool logicalpart(vector<int> a, int k, int mid)
{
    int c = a[0];
    int sum = 0;
    while (c--)
    {
    }
}

int binarypart(vector<int> a, int k)
{
    int start = 0;
    int ans = -1;
    int maxcook = *max_element(a.begin() + 1, a.end());
    int end = (maxcook * (maxcook + 1)) / 2;
    while (start <= end)
    {
        int mid = (start + end) >> 1;
        if (logicalpart(a, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> a{4, 1, 2, 3, 4};
    sort(a.begin(), a.end());
    int k = 10;
    cout << binarypart(a, k) << endl;
}