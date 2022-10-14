#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main(){

    FIO

    int t; cin >> t;
    while (t--)
    {
        int x; cin >> x;
        int c1 = x/3;
        int c2 = x/3;
        if (c1+2*c2 == x)
        {
            cout << c1 << " " << c2 << el;
        }
        else if(c1+2*c2==x-2)
            cout << c1 << " " << c2+1 << el;
        else
            cout << c1+1 << " " << c2 << el;    
    }
    
}