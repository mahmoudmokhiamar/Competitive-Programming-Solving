

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
    vector<int> soliers(n);
    int min_diff = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> soliers[i];
    }
    int ans1; int ans2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (abs(soldiers[i] - soldiers[j])<min_diff && (i == j-1 || j == i - 1 || (j == 1 && i == n || j == n && i == 1)))
            {
                ans1 = i;
                ans2 = j;
            }
        }
    }
    cout << ans1 << ans2 << el;
}