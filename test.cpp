#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    vector<int> nums{1, 1, 2};
    vector<int> ans;
    int i = 0;
    int j = i + 1;
    while (i < j)
    {
        if (nums[i] == nums[j])
        {
            i++;
            j++;
        }
        else
        {
            ans.push_back(nums[i]);
            i = j;
            j = i + 1;
        }
    }
}