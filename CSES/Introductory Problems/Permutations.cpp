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
    int n;
    cin >> n;

    if (n < 4 && n != 1)
        cout << "NO SOLUTION";
    else{
        for (int i = 2; i <= n; i+=2)
            cout << i << " ";
        for (int i = 1; i <= n; i+=2)
            cout << i << " ";
    }
}
