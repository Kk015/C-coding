#include <iostream>
using namespace std;

int find_duplicate(int arr[], int n)
{

    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] == arr[j])
            {
                cout << arr[i] << endl;
            }
        }
    }
}

int main()
{

    int arr[5] = {6, 2, 3, 4, 2};
    find_duplicate(arr, 5);
}