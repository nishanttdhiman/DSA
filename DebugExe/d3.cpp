#include <iostream>
using namespace std;
void populate(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i = i + 2)
    {
        arr[n - j - 1] = i + 2;
        arr[j] = i + 1;
        j++;
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    populate(arr, 7);
    return 0;
}