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

    vector<int> p(n+1);
    if (n%2 != 0)
    {
        cout << -1 <<el;
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            p[i] = i;
        }
    }
    for (int i = 1; i < n; i++)
    {
        swap(p[i],p[i+1]);
        i++;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << p[i] << " ";
    }
    
    cout << el;

}

int main()
{
    solve();
}