#include <bits/stdc++.h>
using namespace std;
void printLongestIncSubArr(int arr[], int n)
{
    int max = 1, len = 1, maxIndex = 0;
    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] <= arr[i + 1])
            len++;
        else
        {
            if (max < len)
            {
                max = len;
                maxIndex = i - max + 1;
            }
            len = 1;
        }
    }

    if (max < len)
    {
        max = len;
        maxIndex = n - max + 1;
    }
    for (int i = maxIndex; i < maxIndex + max; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 4];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printLongestIncSubArr(arr, n);
}
