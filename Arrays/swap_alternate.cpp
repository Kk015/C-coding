#include <iostream>
using namespace std;

int swap_alternate(int arr[], int n)
{
    for (int i = 0; i < n - 1; i = i + 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
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
    swap_alternate(arr, 5);
    printArray(arr, 5);
}