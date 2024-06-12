#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num = 145;
    int start = 0;
    int end = num;
    double ans = -1;
    double step = 0.1;
    int precision = 4;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (mid * mid <= num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    for (int i = 0; i < precision; i++)
    {
        while (ans * ans <= num)
        {
            ans += step;
        }
        ans = ans - step;
        step = step / 10;
    }
    cout << ans << endl;
}