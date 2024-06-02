#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a{10, 3, 40, 20, 50, 80, 70};
    int target = 40;
    int ans = -1;
    int start = 0;
    int end = a.size() - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (a[mid] == target)
        {
            ans = mid;
            break;
        }
        if (mid + 1 <= end && a[mid + 1] == target)
        {
            ans = mid + 1;
        }
        if (mid - 1 >= start && a[mid - 1] == target)
        {
            ans = mid - 1;
        }
        if (a[mid] < target)
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
    }
    cout << ans << endl;
}
