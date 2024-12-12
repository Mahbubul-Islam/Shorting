#include <iostream>
using namespace std;

void insertionSort(int arr[], int len)
{
    int startingIndex, elementOnHand, currentIndex;
    for (int startingIndex = 1; startingIndex < len; startingIndex++)
    {
        elementOnHand = arr[startingIndex];
        currentIndex = startingIndex - 1;

        while (currentIndex >= 0 && arr[currentIndex] > elementOnHand)
        {
            arr[currentIndex + 1] = arr[currentIndex];
            currentIndex = currentIndex - 1;
        }

        arr[currentIndex + 1] = elementOnHand;
    }
}

int main()
{

    int arr[] = {44, 12, 3, 54, 56, 76, 88, 82, 16};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for (size_t i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    insertionSort(arr, len);

    cout << "Sorted array: ";
    for (size_t i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}