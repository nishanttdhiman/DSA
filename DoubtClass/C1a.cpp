#include <iostream>
#include <algorithm>
using namespace std;
int singlenumber(int arr[], int n)
{
    sort(arr, arr + n);
    int ans = -1;
    int i = 0;
    // while (i < n)
    // {
    //     if (i + 1 < n && arr[i] == arr[i + 1])
    //     {
    //         i = i + 2;
    //     }
    //     else
    //     {
    //         ans = arr[i];
    //         break;
    //     }
    // }
    // return ans;
}
int main()
{
    int arr[] = {3, 3, 2, 2, 1, 1, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = singlenumber(arr, size);
    cout << ans;
    return 0;
}