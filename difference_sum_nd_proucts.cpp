#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 3492;
    int lastdigit;
    int product = 1;
    int sum = 0;

    while (n != 0)
    {
        lastdigit = n % 10;
        product = product * lastdigit;
        sum = sum + lastdigit;
        n = n / 10;
    }
    cout << product << " " << sum << endl;
}