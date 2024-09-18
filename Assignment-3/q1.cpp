#include <iostream>
using namespace std;
//! KEY PAIR
//$ ITERATIVE METHOD
bool keyPair(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
//$ TWO POINTER METHOD

int main()
{
    int arr[100] = {1, 4, 45, 6, 10, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter target" << endl;
    cin >> target;
    bool ans = keyPair(arr, size, target);
    cout << "Answer=" << ans;
    return 0;
}