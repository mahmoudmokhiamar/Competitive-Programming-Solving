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
    int t; cin >> t;
    while (t--)
    {
        int ans = 0;
        vector<int> vec;
        int n; cin >> n;
        for (int i = 0; i < n*2; i++)
        {
            int x; cin >> x;
            vec.push_back(x);  
        }
        for (auto i : vec)
        {
            if (i%2 !=0)
            {
                ans++;
            }
            else if(i%2 == 0)
                ans--; 
        }
        if (ans == 0)
        {
            cout << "YES"<< el;
        }
        else
            cout << "NO" <<el;
    }
}