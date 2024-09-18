#include <iostream>
using namespace std;
int swapAlternate(int arr[], int size)
{
    // for (int i = 0; i < size; i = i + 2)
    // {
    //     int temp = arr[i + 1];
    //     arr[i + 1] = arr[i];
    //     arr[i] = temp;
    // }
    for (int i = 0; i < size - 1; i = i + 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
    swapAlternate(arr, size);
    // cout << a;
    //  for(int i=0;i<4;i++)
    //  {
    //      cout<<a[i];
    //  }
    return 0;
}