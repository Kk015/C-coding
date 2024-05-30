#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a{1, 1, 3, 5, 3, 7, 5};
    int XORSUM = 0;
    for (int i = 0; i < a.size(); i++)
    {
        XORSUM = XORSUM ^ a[i];
    }
    cout << XORSUM << endl;
}