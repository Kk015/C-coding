#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int newnum = 0;
    while (num != 0)
    {
        int last_digit = num % 10;
        newnum = (newnum * 10) + last_digit;
        num = num / 10;
    }
    cout << newnum;
}