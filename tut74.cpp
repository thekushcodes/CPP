#include <iostream>
#include <functional> // To use function objects
#include <algorithm>  // To use functions like sort
using namespace std;

// Function Objects (Functors) In C++ STL

int main()
{
    // Function objects(Functors): Function wrapped in a class so that it is available like an object.
    int arr[] = {1, 73, 84, 112, 54, 77};
    sort(arr, arr + 6, greater<int>()); // greater<int>() is a functional object, to sort in descending order. // arr+6 will sort upto 6 elements
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}