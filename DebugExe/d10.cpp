#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 3, 5, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    while (i < size)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After Checking" << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != i + 1)
            cout << i + 1 << " ";
    }
    return 0;
}