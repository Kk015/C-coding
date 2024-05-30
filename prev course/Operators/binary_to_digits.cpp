#include <iostream>
using namespace std;

int main()
{
    int binary_num;
    cin >> binary_num;
    int new_num = 0;
    int base = 1;
    while (binary_num != 0)
    {
        int last_digit = binary_num % 10;
        binary_num = binary_num / 10;
        new_num = new_num + base * last_digit;
        base = base * 2;
    }
    cout << new_num;
}