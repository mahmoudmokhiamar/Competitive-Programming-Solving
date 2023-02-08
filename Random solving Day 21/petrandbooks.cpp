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
    int sum ; cin >> sum;
    int n = 7;
    int ans;
    vector < pair<int,int>> daypage(7);
    for (int i = 0; i < n; i++)
    {
        int p; cin >> p;
        daypage[i] = {i+1,p};
    }

    while (true)
    {
        
        for (auto p : daypage)
        {
            sum -= p.second;
            if (sum <= 0)
            {
                cout << p.first << el;
                return 0 ;
            }
        }
    }
}