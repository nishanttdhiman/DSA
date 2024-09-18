#include <iostream>
using namespace std;
bool linearSearch(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10] = {12, 23, 45, 56};
    bool result = linearSearch(arr, 4, 45);
    cout << result;
    return 0;
}
