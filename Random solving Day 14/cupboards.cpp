#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


void solve()
{
        int ans = 0;
        int t; cin >> t;
        int n = t;
        int cnt_close = 0; int cnt_open = 0;
        vector<int>left;
        vector<int>right;
        while (t--)
        {
            int l , r;
            cin >> l >> r;
            right.push_back(r); left.push_back(l);
        }
        int max_left = max(count(left.begin(),left.end(),0),count(left.begin(),left.end(),1));
        int max_right = max(count(right.begin(),right.end(),0),count(right.begin(),right.end(),1));
        ans += n-max_left;
        ans += n-max_right;
        cout << ans << el;
}
int main()
{

    FIO
    solve();

}