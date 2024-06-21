#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int bs(vector<int> &a, int start, int x)
{
    int end = a.size() - 1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> a{3, 1, 4, 1, 5};
    sort(a.begin(), a.end());
    int k = 2;
    // int i = 0, j = 1, diff;
    set<pair<int, int>> ans;
    for (int i = 0; i < a.size() + 1; ++i)
    {
        if (bs(a, i + 1, a[i] + k) != -1)
        {
            ans.insert({a[i], a[i] + k});
        }
    }

    // while (j < a.size())
    // {
    //     diff = a[j] - a[i];
    //     if (diff == k)
    //     {
    //         ans.insert({a[i], a[j]});
    //         ++i;
    //         ++j;
    //     }
    //     else if (diff > k)
    //     {
    //         i++;
    //     }
    //     else
    //     {
    //         j++;
    //     }
    // }
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << endl;
    }
}