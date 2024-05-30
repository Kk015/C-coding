#include <iostream>
using namespace std;

int occurence1(int a[], int n)
{
    int s = 0, e = 9;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (a[mid] == n)
        {
            ans = mid;
            e = mid - 1; // to find first occurence we are moving to the left side of the array to find the first occurence of the element
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

    return ans;
}
int occurence2(int a[], int n)
{
    int s = 0, e = 9;          // 9 is the last index
    int mid = s + (e - s) / 2; // mid is the first index
    int ans = -1;
    while (s <= e)
    {
        if (a[mid] == n)
        {
            ans = mid;
            s = mid + 1; // we are moving to the right side
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

    return ans;
}

int main()
{
    int a[10] = {1, 2, 3, 4, 4, 6, 7, 8, 9, 10};
    int n = 4;
    cout << "First occurence " << occurence1(a, n);
    cout << endl;
    cout << "Second occrence " << occurence2(a, n);
}