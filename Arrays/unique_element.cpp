#include <iostream>
using namespace std;

int unique_element(int arr[], int n)
{
    // find the single unique element in the array
    // all other elements are present twice
    // xor of a number with itself is 0
    // xor of a number with 0 is the number itself
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
        cout << xorsum << endl;
    }
}

int main()
{

    int arr[5] = {9, 1, 1, 5, 5};
    unique_element(arr, 5);
}