#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    bool isprimenumber = 1;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isprimenumber = 0;
            break;
        }
    }
    if (isprimenumber == 1)
    {
        cout << "This number is prime" << endl;
    }
    else
    {
        cout << "This number is not prime" << endl;
    }
}