#include <iostream>
using namespace std;

int main()
{
    return 0;
}
// Max number from array
//     int arr[5] = {1, 5, 3, 9, 2};
//     int max = arr[0]; // max = 0 is not advised because if there are only negative numbers in the array and no 0 then it will print 0 which is wrong.
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     cout << "The maximum element of the array is: " << max;

// Reversing an array
// float arr[] = {1.1, 4.5, 4.56, 0.98, 9.009};
// int n = sizeof(arr) / sizeof(arr[0]);
// // This one actually reverses array.
// for (int i = 0; i < n/2; i++)
// {
//     float temp = arr[i];
//     arr[i] = arr[n-1-i];
//     arr[n-1-i] = temp;
// }
// for (int i = 0; i < n; i++)
// {
//         cout<<arr[i]<<endl;
// }
// //This one only prints in reverse.
// for (int i = n-1; i >= 0; i--)
// {
//     cout<<arr[i]<<endl;
// }

// Array sorted or not
// int arr[5] = {1,2,9,4,5};
// bool isSorted = true;
// int n = sizeof(arr) / sizeof(arr[0]);
// for (int i = 1; i < n; i++)
// {
//     if(arr[i] < arr[i-1]){
//         isSorted = false;
//         break;
//     }
// }
// if (isSorted)
// {
//     cout<<"Sorted";
// }
// else{
//     cout<<"Not sorted";
// }

// Strictly sorted or not
// int arr[6] = {1,2,3,3,4,5};
// int n = sizeof(arr) / sizeof(arr[0]);
// bool isSorted = true;
// for (int i = 1; i < n; i++)
// {
//     if (arr[i] <= arr[i-1])
//     {
//         isSorted = false;
//         break;
//     }
// }
//         if (isSorted){
//         cout<<"Sorted";
//     }
//     else{
//         cout<<"Not sorted";
//     }

// Finding second largest number in an array