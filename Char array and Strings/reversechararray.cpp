#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c[100];
    cin.getline(c, 50);
    int i = 0;
    int j = strlen(c) - 1;
    while (i <= j)
    {
        swap(c[i], c[j]);
        i++;
        j--;
    }
    for (int i = 0; i < strlen(c); i++)
    {
        cout << c[i];
    }
    cout << endl;
}