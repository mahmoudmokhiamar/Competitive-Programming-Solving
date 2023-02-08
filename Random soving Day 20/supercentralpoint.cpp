#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

bool check(pair<int,int> point, vector<pair<int,int>> points)
{

    bool right,left,upper,lower;
    right = left = upper = lower = false;
    for (auto p : points)
    {
        if(p.first>point.first && p.second == point.second)
            right = true;
        if(p.first<point.first && p.second == point.second)
            left = true;
        if(p.first == point.first && p.second > point.second)
            upper = true;
        if(p.first == point.first && p.second < point.second)
            lower = true;
    }
    
    return (left && upper && lower && right);
    
    
}


int main()
{
    FIO
    int n ; cin >> n;
    int ans = 0;
    vector<pair<int,int>> points;
    for (int i = 0; i < n; i++)
    {
        int x , y ; cin >> x >> y;
        points.push_back({x,y});
    }
    for (auto p : points)
    {
        if (check(p,points))
            ans++;
    }
    cout << ans << el;
    
}