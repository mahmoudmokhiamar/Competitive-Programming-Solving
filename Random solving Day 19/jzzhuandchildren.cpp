#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main()
{
    FIO
    queue<pair<int,int>> q ;
    int n,m; cin >> n >> m ;
    for (int i = 0; i < n; i++)
    {
        int a; cin >> a;
        q.push({a,i+1});
    }
    int ans;
    while (!q.empty())
    {
        if ((int)q.size() == 1)
        {
            ans = q.front().second;
        }
        int need = q.front().first;
        if (need - m <= 0)
        {
            q.pop();
        }
        else
        {
            auto kid = q.front();
            kid.first -= m;
            q.pop();
            q.push(kid);
        }
    }
    cout << ans << el;
}