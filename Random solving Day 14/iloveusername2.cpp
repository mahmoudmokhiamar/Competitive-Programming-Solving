#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

void solve()
{
    int n ; cin >> n;
    int ans= 0;
    vector<int> contest(n);
    int min = *min_element(contest.begin(),contest.end());
    int max = *max_element(contest.begin(),contest.end());
    for (int i = 0; i < n; i++)
    {
        cin >> contest[i] ;
    }
    for (int i = 1; i < n; i++)
    {
        if (contest[i] > contest[i-1] && contest[i] > max)
        {
            ans++;
        }
        else if(contest[i] < contest[i-1] && contest[i] < min)
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