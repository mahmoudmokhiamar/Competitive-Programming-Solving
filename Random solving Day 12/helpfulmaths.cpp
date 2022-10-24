#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

void solve()
{
    string calc; cin >> calc;
    vector<int> ans;
    for (auto ch : calc)
    {
        if (isdigit(ch))
        {
            ans.push_back(ch-'0');
        }
    }
    sort(ans.begin(),ans.end());
    int sz = ans.size();
    for (int i = 0; i < sz-1; i++)
    {
        cout << ans[i] << '+';
    }
    cout << ans[sz-1] << el;
}



int main()
{
    FIO
    solve();
}