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
        string word;
        cin >> word;
        int sz = word.size();
        if (sz <= 10)
            cout << word << el;
        else
        {
            cout << word[0] << sz - 2 << word[sz-1] << el;
        }   
    } 
    return 0;
}