#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a{0, 2, 4, 6, 8, 10, 5, 2};
    int start = 0;
    int end = a.size() - 1;
    int ans = -1;
    while (start < end)
    {
        int mid = start + ((end - start) / 2);
        if (a[mid] < a[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            ans = a[mid];
            end = mid;
        }
    }
    cout << ans << endl;
}