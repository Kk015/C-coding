#include <iostream>
#include <cstring>

using namespace std;

bool checkpalindrome(char c[])
{
    int i = 0;
    int j = strlen(c) - 1;
    while (i <= j)
    {
        if (c[i] != c[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    char c[100];
    cin.getline(c, 50);
    cout << boolalpha << checkpalindrome(c) << endl;
}