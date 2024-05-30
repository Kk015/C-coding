#include <iostream>
using namespace std;

int main()
{
    int b_num;
    cin >> b_num;
    int count = 0;
    while (b_num != 0)
    {
        int last_digit = b_num % 10;
        if (last_digit == 1)
        {
            count++;
        }
        b_num = b_num / 10;
    }
    cout << count;
}