#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a{1, 1, 4, 4, 3, 3, 6, 5, 5};
    int start = 0;
    int end = a.size() - 1;
    int ans = -1;
    while (start <= end)

    {
        if (start == end)
        {
            ans = start;
            break;
        }
        int mid = start + ((end - start) / 2);

        if (mid % 2 == 0)
        {
            if (a[mid] == a[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            if (a[mid] == a[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    cout << "The unique element is at index: " << ans << " and the element is: " << a[ans] << endl;
}