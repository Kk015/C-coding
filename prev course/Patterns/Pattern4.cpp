#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {

            cout << " ";
        }
        int temp = 1;
        for (int j = 1; j <= i; j++)
        {

            cout << temp;
            temp++;
        }
        int temp1 = i - 1;
        for (int j = 2; j <= i; j++)
        {

            cout << temp1;
            temp1--;
        }
        cout << endl;
    }
}