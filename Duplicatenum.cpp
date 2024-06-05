#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 3, 4, 2, 5, 2, 3};
    int ans = -1;
    int n = v.size();

    // ******-------------------------------------------------------------------*****
    // for (int i = 0; i < n; i++)
    // {
    //     int index = abs(v[i]);
    //     if (v[index] < 0)
    //     {
    //         ans = index;
    //         break;
    //     }
    //     v[index] *= -1;
    // }
    // cout << ans << endl;
    //****-----------------------------------------------------------------------****

    for (int i = 0; i < n; ++i)
    {
        while (v[i] != i + 1)
        {
            if (v[i] == v[v[i] - 1])
            {
                ans = v[i];
                break;
            }
            swap(v[i], v[v[i] - 1]);
        }
        if (ans != -1)
            break;
    }
    cout << ans << endl;
    return 0;
}