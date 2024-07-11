#include <iostream>
#include <string>
using namespace std;

bool checkpalindrome(string a, int i, int j)
{
    while (i <= j)
    {
        if (a[i] != a[j])
        {
            return false;
        }
        i++;
    }
    return true;
}

bool validpalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return checkpalindrome(s, i + 1, j) || checkpalindrome(s, i, j - 1);
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    string s = "azxxzab";
    cout << boolalpha << validpalindrome(s) << endl;
}