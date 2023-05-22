#include <iostream>
using namespace std;

int main()
{
    char button;
    cin >> button;

    // if (button == 'a')
    // {
    //     cout << "a is typed" << endl;
    // }
    // else if (button == 'b')
    // {
    //     cout << "b is typed" << endl;
    // }
    // else if (button == 'c')
    // {
    //     cout << "c is typed" << endl;
    // }

    switch (button)
    {
    case 'a':
        cout << "a is typed" << endl;
        break;
    case 'b':
        cout << "b is typed" << endl;
        break;
    case 'c':
        cout << "c is typed" << endl;
        break;

    default:
        cout << "NO INPUT" << endl;
        break;
    }
}