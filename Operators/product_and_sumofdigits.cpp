#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int product = 1;
    int sum = 0;
    while (num != 0)
    {
        int last_digit = num % 10;
        product = product * last_digit;
        sum = sum + last_digit;
        num = num / 10;
    }
    cout << product - sum << endl;
}