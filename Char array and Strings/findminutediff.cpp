#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int findmindiff(vector<string> s)
{
    vector<int> minvector;

    for (int i = 0; i < s.size(); i++)
    {
        string curr = s[i];
        int hour = stoi(curr.substr(0, 2));
        int min = stoi(curr.substr(3, 2));
        int totalmin = min + hour * 60;
        minvector.push_back(totalmin);
    }

    sort(minvector.begin(), minvector.end());
    int mini = INT32_MAX;
    int n = minvector.size() - 1;
    for (int i = 0; i < n; i++)
    {
        int diff = minvector[i + 1] - minvector[i];
        mini = min(mini, diff);
    }

    // IMPORTANT PART
    int lastdiff = (minvector[0] + 1440) - minvector[n];
    mini = min(mini, lastdiff);

    return mini;
}
int main()
{
    vector<string> s{"23:59", "00:00"};
    cout << findmindiff(s) << endl;
}