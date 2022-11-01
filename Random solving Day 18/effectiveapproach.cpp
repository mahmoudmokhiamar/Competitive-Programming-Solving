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
    unordered_map < int , int > nums;
    int n ; cin >> n;
    ll left = 0 ,right = 0;
    for (int i = 0; i < n; i++)
    {
        int x ; cin >> x ;
        nums.insert({x,i+1});
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++)
    {
        int q; cin >> q;
        left += (nums[q]);
        right += (n - nums[q]+1);
    }
    cout << left << " " << right << el;
}