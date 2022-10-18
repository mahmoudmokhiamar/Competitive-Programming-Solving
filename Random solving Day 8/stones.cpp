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
    int cnt = 0;
    string word; cin >> word;

    for (int i = 0; i < n; i++)
    {
        if (word[i] == word[i+1])
        {
            cnt++;
        }
        
    }
    cout << cnt << el;
}