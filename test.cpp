#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> a{1, 2, 3, 4, 5, 6};
    int b[] = {4, 2, 6, 3, 1, 5};

    int c = accumulate(a.begin(), a.end(), 0);
    int d = accumulate(b, b + 6, 0);

    cout << c << endl;
    cout << d << endl;
}