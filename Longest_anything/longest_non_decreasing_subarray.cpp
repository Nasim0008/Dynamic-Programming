#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 1;
    int mx = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
       mx = max(cnt,mx);
    }
    cout << mx << endl;
}