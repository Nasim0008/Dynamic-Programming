#include <bits/stdc++.h>
using namespace std;
int Kadanes(int arr[], int n)
{
    int mx_begin = 0;
    int mx_ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx_begin = mx_begin + arr[i];
        if (mx_begin < arr[i])
        {
            mx_begin = arr[i];
        }
        if (mx_ans < mx_begin)
        {
            mx_ans = mx_begin;
        }
    }
    return mx_ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx_sum = Kadanes(arr, n);
    cout<< mx_sum<<endl;
}