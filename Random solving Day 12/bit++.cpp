#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5;

void solve()
{
    int t; cin >> t;
    int ans = 0;
    while (t--)
    {
        char x, op1,op2;
        cin >> x >> op1 >> op2;
        if (op1 == '+')
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }
    cout << ans << el;
}
int main()
{
    FIO
    solve();
}