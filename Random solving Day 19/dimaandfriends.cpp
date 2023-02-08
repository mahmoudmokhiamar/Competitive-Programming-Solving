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
    int n; cin >> n ;
    int fingers = 0; 
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x ; cin >> x;
        fingers += x;
    }
    ans = fingers;
    while (ans%(n+1)==1)
    {
        ans++;
        cout << "first time" << el;
    }
    cout << ans << el;   
}