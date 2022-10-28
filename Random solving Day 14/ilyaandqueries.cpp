#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


void solve()
{

    string str = "#..###";
    int sz = str.size();
    vector<int>pref(sz+1,0);
    pref[1] = 1*(str[0] == '.');
    for (int i = 1; i < sz + 1 ; i++)
    {
        pref[i] = pref[i-1] + 1*(str[i-1]=='.');
    }
    
    int l = 3; int r = 6;
    cout << pref[r] - pref[l] << el;
    for (int i = 0; i < pref.size(); i++)
    {
        cout << pref[i] << el;
    }
    
    
   
}

int main()
{

    solve();
}