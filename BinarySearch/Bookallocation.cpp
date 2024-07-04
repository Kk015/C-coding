#include <iostream>
#include <numeric>
using namespace std;

bool ispage(int a[], int n, int m, int mid)
{
    int c = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid)
        {
            return false;
        }
        if (pagesum + a[i] > mid)
        {
            c++;
            pagesum = a[i];
            if (c > m)
            {
                return false;
            }
        }
        else
        {
            pagesum += a[i];
        }
    }

    return true;
}

int findpages(int arr[], int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int start = 0;
    int end = accumulate(arr, n + arr, 0);
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) >> 1;
        if (ispage(arr, n, m, mid))
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
    int arr[] = {12, 34, 67, 90};
    int n = 4;
    int m = 2;
    cout << findpages(arr, n, m) << endl;
}