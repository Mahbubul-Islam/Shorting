#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int pass, j, flag;
    for (pass = 1; pass < n; pass++)
    {
        flag = 0;

        for (j = 0; j < (n - pass); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
                flag = 1;
            }
        }

        if (flag == 0)
        {
            break;
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

    bubbleSort(arr, len);

    cout << "Sorted array: ";
    for (size_t i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}