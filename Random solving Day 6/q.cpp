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

    int n; cin >> n;
    int t; cin >> t;
    vector<char> v(n);

    char c;

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        v[i] = c;
    }
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 'B' && v[i+1] == 'G')
            {
                swap(v[i], v[i+1]);
                i++;
            }
        }
    }
    for (auto i : v)
    {
        cout << i;
    }
    cout << el;    
}