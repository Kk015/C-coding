#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int checkpalindrome(string s, int left, int right)
{
    int count = 0;
    while (left >= 0 && right < s.length() && s[left] == s[right])
    {
        count++;
        left--;
        right++;
    }
    return count;
}

int countpalindrome(string s)
{
    int totalcount = 0;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        int oddans = checkpalindrome(s, i, i);
        totalcount += oddans;

        int evenans = checkpalindrome(s, i, i + 1);
        totalcount += evenans;
    }
    return totalcount;
}

int main()
{
    string s = "abaab";
    cout << countpalindrome(s) << endl;
}