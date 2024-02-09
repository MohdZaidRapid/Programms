#include <iostream>
using namespace std;

// void removeDuplicates(int arr[], int &n) {
//     if (n <= 1) {
//         // If the array has 0 or 1 element, there are no duplicates to remove
//         return;
//     }

//     int newSize = 1; // Initialize the size of the new array

//     // Iterate through the array, starting from the second element
//     for (int i = 1; i < n; i++) {
//         bool isDuplicate = false;

//         // Check if the current element is a duplicate of any previous elements
//         for (int j = 0; j < newSize; j++) {
//             if (arr[i] == arr[j]) {
//                 isDuplicate = true;
//                 break;
//             }
//         }

//         // If the current element is not a duplicate, add it to the new array
//         if (!isDuplicate) {
//             arr[newSize] = arr[i];
//             newSize++;
//         }
//     }

//     // Update the size of the array to reflect the removal of duplicates
//     n = newSize;
// }

// void removeDuplicates(int arr[], int &n)
// {
//     if (n <= 1)
//     {
//         return;
//     }

//     int newSize = 1;

//     for (int i = 1; i < n; i++)
//     {
//         bool isDuplicate = false;
//         for (int j = 0; j < newSize; j++)
//         {
//             if (arr[i] == arr[j])
//             {

//                 isDuplicate = true;
//                 break;
//             }
//         }

//         if (!isDuplicate)
//         {
//             arr[newSize] = arr[i];
//             newSize++;
//         }
//     }
//     n = newSize;
// }

// void removeDuplicates(int arr[], int &n)
// {
//     if (n <= 1)
//     {
//         return;
//     }
//     int newArray = 1;

//     for (int i = 1; i < n; i++)
//     {
//         bool isDuplicate = false;
//         for (int j = 0; j < newArray; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 isDuplicate = true;
//                 break;
//             }
//         }

//         if (!isDuplicate)
//         {
//             arr[newArray] = arr[i];
//             newArray++;
//         }
//     }
//     n = newArray;
// }

// void removeDuplicates(int arr[], int &n)
// {
//     if (n <= 1)
//     {
//         return;
//     }

//     int newArraySize = 1;

//     for (int i = 1; i < n; i++)
//     {
//         bool isDuplicate = false;
//         for (int j = 0; j < newArraySize; j++) //{1, 2, 2, 3, 4, 4, 5}
//         {
//             if (arr[i] == arr[j])
//             {
//                 isDuplicate = true;
//                 break;
//             }
//         }

//         if (!isDuplicate)
//         {
//             arr[newArraySize] = arr[i];
//             newArraySize++;
//         }
//     }
//     n = newArraySize;
// }

void removeDuplicates(int arr[], int &n)
{
    if(n<=1){
        return;
    }
    int sizeArray = 1;
    for (int i = 1; i < n; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < sizeArray; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate)
        {
            arr[sizeArray] = arr[i];
            sizeArray++;
        }

       
    }
     n = sizeArray;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 7, 8, 9, 10, 1, 1, 1, 1, 1, 2, 3, 4, 6, 78, 4, 34, 2, 32, 1, 3, 45, 6, 7, 3, 4, 67, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    removeDuplicates(arr, n);

    // Print the modified array
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl
         << "size is " << n << endl;

    return 0;
}
