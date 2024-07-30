#include <iostream>
#include <string>
using namespace std;

int checkpalindrome(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i++;
        j--;
    }

    return count;
}

int totalpalindrome(string s)
{
    int totalcount = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        // odd
        int oddcount = checkpalindrome(s, i, i + 1);
        totalcount += oddcount;

        // even
        int evencount = checkpalindrome(s, i, i);
        totalcount += evencount;
    }
    return totalcount;
}

int main()
{
    string a = "ab";
    cout << totalpalindrome(a) << endl;
}