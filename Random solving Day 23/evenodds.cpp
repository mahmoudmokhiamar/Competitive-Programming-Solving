#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e6+5;

int main()
{
    FIO
    ll n, k ; cin >> n >> k;
    ll cnt_evens,cnt_odds;
    cnt_evens = cnt_odds = 0;
    ll even_index = 0;
    ll ans_even = 0;
    ll ans_odds = 1;
    if (n%2 == 0)
    {
        cnt_evens = n/2;
        cnt_odds = n-cnt_evens;
    }
    else
    {
        cnt_odds = n/2 + 1;
        cnt_evens = n-cnt_odds;
    }
    even_index = cnt_odds;
    if (k > cnt_odds)
    {
        while (even_index < k)
        {
            ans_even += 2;
            even_index++;
        }
        cout << ans_even << el;
        return 0;
    }
    else
    {
        k--;
        while (k--)
        {
            ans_odds +=2;
        }
        cout << ans_odds << el;
    }
   
}