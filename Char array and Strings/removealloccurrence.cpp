#include <iostream>
#include <string>
using namespace std;

string removealloccurrence(string s, string part)
{
    int pos = s.find(part);
    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}

int main()
{
    string s = "axxxyyyb";
    string part = "xy";
    cout << removealloccurrence(s, part) << endl;
}