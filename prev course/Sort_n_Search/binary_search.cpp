#include <iostream>
using namespace std;

int binary_search(int a[], int n)
{
    int s = 0, e = 10;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (a[mid] == n)
        {
            cout << "Found at index " << mid << endl;
            return mid;
        }
        else if (n > a[mid])
        {
            s = mid + 1;
        }
        else if (n < a[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Not found" << endl;
    return -1;
}
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 7;
    binary_search(a, n);
}