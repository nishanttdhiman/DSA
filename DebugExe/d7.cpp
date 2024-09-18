#include <iostream>
using namespace std;
void sort0sand1s(int input[], int size)
{
    int nextZero = 0;
    for (int i = 0; i < size; i++)
    {
        if (input[i] == 0)
        {
            int temp = input[nextZero];
            input[nextZero] = input[i];
            input[i] = temp;

            nextZero++;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << input[i] << " ";
    }
}
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 0, 1};
    sort0sand1s(arr, 7);
    return 0;
}