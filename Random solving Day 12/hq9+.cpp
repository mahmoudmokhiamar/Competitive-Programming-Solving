#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5;


void solve()
{
    string input; cin >> input;
    bool ans = false;
    for (auto ch : input)
    {
        if (ch == 'H' || ch == 'Q' || ch == '9')
        {
            ans = true;
        } 
    }
    (ans)?cout << "YES" : cout << "NO" << el;
}


int main()
{
    FIO
    solve();

}