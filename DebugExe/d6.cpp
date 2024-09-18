#include <iostream>
using namespace std;
int tripletSumToX(int input[], int size, int x)
{
    int triplets = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (input[i] + input[j] + input[k] == x)
                    triplets++;
            }
        }
    }
    return triplets;
}
int main()
{
    cc
    cout << tripletSumToX(arr, 6, 60);
    return 0;
}