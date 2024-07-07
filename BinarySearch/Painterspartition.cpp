#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool logicpart(vector<int> arr, int n, int k, int mid)
{
    int c = 1;
    int paintsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (paintsum + arr[i] > mid)
        {
            c++;
            paintsum = arr[i];
            if (c > k)
            {
                return false;
            }
        }
        else
        {
            paintsum += arr[i];
        }
    }

    return true;
}

int binarypart(vector<int> arr, int n, int k)
{
    int ans = -1;
    int start = 0, end = accumulate(arr.begin(), arr.end(), 0);
    while (start <= end)
    {
        int mid = (start + end) >> 1;

        if (logicpart(arr, n, k, mid))
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
    vector<int> arr{10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << binarypart(arr, n, k) << endl;
}