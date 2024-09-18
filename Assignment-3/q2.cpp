#include <iostream>
using namespace std;
//! FINDING THE PIVOT INDEX
int pivotIndex(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int lsum = 0;
        int rsum = 0;
        for (int j = 0; j < i; j++)
        {
            lsum = lsum + arr[j];
        }
        for (int j = i + 1; j < size; j++)
        {
            rsum = rsum + arr[j];
        }
        cout << "For Index-" << i << ": Left Sum = " << lsum << " Right Sum = " << rsum << endl;
        if (lsum == rsum)

            return i;
    }
    return -1;
}
int pivotIndex1(int arr[], int size)
{
    int lsum[] = {0};
    int rsum[] = {0};
    // # Calculation Of Left Sum
    for (int i = 1; i < size; i++)
    {
        lsum[i] = lsum[i - 1] + arr[i - 1];
    }
    for (int i = size - 2; i >= 0; i--)
    {
        rsum[i] = rsum[i + 1] + arr[i + 1];
    }
    for (int i = 0; i < size; i++)
    {
        if (lsum[i] == rsum[i])
            return i;
    }
}
int main()
{
    int arr[] = {1, 7, 3, 6, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << pivotIndex(arr, size);
    cout << pivotIndex1(arr, size);
    return 0;
}