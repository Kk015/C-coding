#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "azxxzy";
    string ans = "";
    int i = 0;
    while (i < s.length())
    {

        if (ans[ans.length() - 1] == s[i] && ans.length() > 0)
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }

        i++;
    }
    cout << ans << endl;
}