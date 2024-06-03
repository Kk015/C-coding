#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a{1, 2, 3, 3, 3, 3, 4, 5};
    int start = 0;
    int end = a.size() - 1;
    int ans = -1;
    int target = 3;
    while (start <= end)

    {
        int mid = start + ((end - start) / 2);
        if (a[mid] == target)
        {
            ans = mid;
            // end = mid - 1;
            start = mid + 1;
        }
        else if (a[mid] > target)
        {
            end = mid - 1;
        }
        else if (a[mid] < target)
        {
            start = mid + 1;
        }
    }
    cout << ans << endl;
}