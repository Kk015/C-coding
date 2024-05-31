#include <iostream>
using namespace std;

int main()
{
    int givennum = 3492;
    int ans = 0;
    while (givennum != 0)
    {
        int lastdigit = givennum % 10;
        ans = ans * 10 + lastdigit;
        givennum = givennum / 10;
    }
    cout << ans << endl;
}
