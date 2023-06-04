#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a = 65;
    for (int i = 1; i <= n; i++)
    {
        char temp = a;
        for (int j = 1; j <= n; j++)
        {

            cout << temp;
            temp++;
        }
        a++;
        cout << endl;
    }
}