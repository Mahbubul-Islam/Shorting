#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int startIdx, currentIdx, minIdx;
    for (startIdx = 0; startIdx < (n - 1); startIdx++)
    {
        minIdx = startIdx;

        for (currentIdx = startIdx + 1; currentIdx < n; currentIdx++)
        {
            if (arr[currentIdx] < arr[minIdx])
            {
                minIdx = currentIdx;
            }
        }

        if (minIdx != startIdx)
        {
            swap(arr[minIdx], arr[startIdx]);
        }
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

    selectionSort(arr, len);

    cout << "Sorted array: ";
    for (size_t i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}