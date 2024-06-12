#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a{8, 9, 10, 2, 4, 8};
    int start = 0;
    int end = a.size() - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (start == end)
        {
            ans = start;
            break;
        }
        if (mid + 1 <= end && a[mid] > a[mid + 1])
        {
            ans = mid;
            break;
        }
        if (mid - 1 >= start && a[mid - 1] > a[mid])
        {
            ans = mid - 1;
            break;
        }
        if (a[start] > a[mid])
        {
            end = mid - 1;
        }
        else if (a[start] < a[mid])
        {
            start = mid + 1;
        }
    }
    cout << ans << endl;
}