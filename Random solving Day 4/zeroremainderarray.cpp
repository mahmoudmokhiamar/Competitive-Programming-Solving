#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
const int N = 1e5+5;
using namespace std;
 

int main()
{
 FIO
 int t; cin >> t;
 int xs = 0;
 int ys = 0;
 int zs = 0;
 
    while (t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        xs += x;
        ys += y;
        zs += z;
    }

(xs == 0 && ys == 0 && zs == 0) ? cout << "YES" << el : cout <<  "NO" << el;   
    
}