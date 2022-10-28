#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

void solution()
{
    int t; cin >> t;
    int ans = 0;
    int max_capacity = 0;
    while (t--)
    {
        int a,b;
        cin >> a >> b;
        ans += b - a;
        if (max_capacity < ans)
            max_capacity = ans;
        
    }
    cout << max_capacity << el;
}
int main()
{
    FIO
    solution();
}