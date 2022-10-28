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
    int n; cin >> n;
    vector<int> contest(n);
    for (int i = 0; i < n; i++)
    {
        int x ; cin >> x;
        contest[i] = x;
    }
    for (int i = 1; i < n; i++)
    {
        int j = i-1;
        if (contest[i] < contest[i-1])
        {
            while (j >= 0 && contest[j]>contest[i])
            {
                j--;
            }
        }
        else if (contest[i] > contest[i-1])
        {
            while (j >= 0 && contest[j]<contest[i])
            {
                j--;
            }
        }
        if (j<=-1)
        {
            ans++;
        } 
    }
    cout << ans << el;
}

int main()
{
    FIO
    solve();
}