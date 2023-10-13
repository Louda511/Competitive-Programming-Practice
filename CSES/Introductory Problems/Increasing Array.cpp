#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long



int main()
{
    ll n, count = 0, max = 0;
    cin >> n;

    int *arr = new int [n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i]){
            count += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }

    }

    cout << count;
}
