#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

int main(){



    int n; cin >> n;
    int ans = 0;
    while (n--)
    {
        int cnt = 0;
        for (int i = 0; i < 3; i++)
        {
            int x; cin >> x;
            if (x == 1)
            {
                cnt++;
            }
        }
        if (cnt >=2)
        {
            ans++;
        }
        cnt = 0;
    }
    cout << ans << el;
    
}