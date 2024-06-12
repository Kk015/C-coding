#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    vector<int> a{3, 1, 4, 1, 5};
    sort(a.begin(), a.end());
    int i = 0, j = 1, k = 2, diff;
    set<pair<int, int>> ans;
    while (j < a.size())
    {
        diff = a[j] - a[i];
        if (diff == k)
        {
            ans.insert({a[i], a[j]});
            ++i;
            ++j;
        }
        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << endl;
    }
}