#include <iostream>
#include <cstring>

using namespace std;

void converttouppercase(char *c)
{
    int i = 0;
    int j = strlen(c);
    while (i < j)
    {
        c[i] = c[i] - 32;
        i++;
    }
}

int main()
{
    char c[100];
    cin.getline(c, 50);
    converttouppercase(c);
    for (int i = 0; i < strlen(c); i++)
    {
        cout << c[i];
    }
    cout << endl;
}