

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
    int n ; cin >> n ;

    vector < pair<int,int> >  soldiers(n);
    for (int i = 0; i < n; i++)
    {
        int h ; cin >> h ;
        soldiers[i] = {h,i+1};
    }

    sort(soldiers.begin(),soldiers.end());
    int ans1,ans2;
    int min_diff = INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
        int index1 = soldiers[i].second;
        int index2 = soldiers[i+1].second;
        if ((index1 == index2 + 1) && 
        abs(soldiers[i].first - soldiers[i+1].first) < min_diff)
        {
            min_diff = abs(soldiers[i].first - soldiers[i+1].first);
            ans1 = soldiers[i].second;
            ans2 = soldiers[i+1].second;
           
        }
        else if (soldiers[i].second == 1 && soldiers[i+1].second == n &&
        abs(soldiers[i].first - soldiers[i+1].first) < min_diff)
        {
            min_diff = abs(soldiers[i].first - soldiers[i+1].first);
            ans1 = soldiers[i+1].second;
            ans2 = soldiers[i].second;
        } 
    }
    cout << ans1 << " " << ans2 << el;
}
