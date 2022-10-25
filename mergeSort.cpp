#include <iostream>
using namespace std;
  
// Merges two subarrays of array[].
// First subarray is arr[begin..mid].
// Second subarray is arr[mid+1..end].
void merge(int array[], int const left, int const mid, int const right)
{

}
  
// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted.
void mergeSort(int array[], int const begin, int const end)
{

}
  
// Function to print an array.
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
  
int main()
{
    int arr_size;
    std::cin >> arr_size;

    int arr[arr_size];

    for (int i=0; i<arr_size; i++) {
         std::cin >> arr[i];
    }
  
    printArray(arr, arr_size);
  
    mergeSort(arr, 0, arr_size - 1);

    printArray(arr, arr_size);
    return 0;
}
