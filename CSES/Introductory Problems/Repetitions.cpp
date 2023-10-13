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
 string s;
 int count = 1,max = 1;

 cin >> s;

 for (int i = 1; i < s.length(); i++)
 {

     if(s[i-1] == s[i]){
         count ++;
     }
     else{
         count = 1;
     }
     if(count > max)
         max = count;
 }
 cout << max;
}
