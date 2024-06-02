#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 1};  // Initialize the vector with given elements
    unordered_map<int, int> hash; // Create an unordered_map to store the frequency of elements

    // Count the frequency of each element in the vector
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }

    // Find the first element with a frequency greater than 1
    for (int i = 0; i < arr.size(); i++)
    {
        if (hash[arr[i]] > 1)
        {
            cout << i << endl; // Output the 1-based index of the first repeating element
            break;
        }
    }

    return 0; // Return 0 to indicate successful execution
}