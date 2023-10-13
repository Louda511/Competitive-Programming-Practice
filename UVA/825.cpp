#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define pb push_back
#define pq priority_queue
#define el cout<<endl;
#define NO cout<< "NO";
#define YES cout <<"YES";


int t, row, col;
int **v;
string s;

bool valid(int r, int c)
{
    if (r <= row && c <= col)
        return true;
    else
        return false;
}
void create_map(){
    cin >> row >> col;
    v = new int *[row + 1];

    for (int i = 0; i <= row; i++) {
        v[i] = new int[col + 1];
    }
    for(int x = 1; x<= row;x++){
        for (int y = 1; y<= col; y++){
            v[x][y] = 0 ;
        }
    }
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (int i = 1; i <= row; i++) {
        vector<string>tokens;
        getline(cin, s);
        stringstream ss(s);
        int x,y;
        ss >> x;
        while(ss >> y)
        {
            v[x][y] = -1;
        }

    }
}

int solve(int r, int c)
{
    if(!valid(r, c))
        return 0;

    if(r == row && c == col)
        return 1;

    if(v[r][c] == -1)
        return 0;


    return solve(r+1,c) + solve(r,c+1);


}


int main()
{

    cin >> t;
    while(t--) {
        create_map();
        cout << solve(1, 1) << endl;
        if (t)el
    }

    return (0);
}
