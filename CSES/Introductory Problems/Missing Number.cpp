#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define pb push_back
#define pq priority_queue
#define el cout<<endl;
#define NO cout<< "NO";
#define YES cout <<"YES";



int main()
{
 int n, x;
 cin >> n;
 int *arr = new int[n+1];

 for (int i = 1; i <= n - 1; i++)
 {
     cin >> x;
     arr[x] = 1;
 }
 for (int i = 1; i <= n; i++)
 {
     if (arr[i] != 1)
     {
         cout << i;
     }
 }
}
