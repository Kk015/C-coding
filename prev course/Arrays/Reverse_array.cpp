#include <iostream>
using namespace std;

int reverse(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}
int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    printArray(arr, 5);
}