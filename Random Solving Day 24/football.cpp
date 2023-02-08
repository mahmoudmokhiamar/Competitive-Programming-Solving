#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main()
{
    map<string,int> team;
    int t; cin >> t;

    while (t--)
    {
       string str; cin >> str;
       team[str]++;
    }
    string ans;
    int mx = INT_MIN;
    for (auto mm : team)
    {
       if (mm.second > mx)
       {
            mx = mm.second;
            ans = mm.first;
       }
    }
   cout << ans << el;
}