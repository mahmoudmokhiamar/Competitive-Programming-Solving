#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main()
{

    int n ; cin >> n;
    vector < int > studs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> studs[i];
    }
    sort(studs.begin(),studs.end());
    int ans = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j<n && studs[j] - studs[i] <= 5)
        {
            j++;
            ans = max(ans,j-i);
        }  
    }
    cout << ans << el;
}