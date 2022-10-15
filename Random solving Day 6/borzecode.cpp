#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main()
{
    string b; cin >> b;
    int sz = (int)b.size();
    for (int i = 0; i < sz; i++)
    {
        if (b[i] == '.')
        {
            cout << 0;
        }
        else if(b[i] == '-'){
            if (b[i+1] == '.')
            {
                cout << 1;
                i ++;
            }
            else if(b[i+1] == '-'){
                cout << 2;
                i ++;
            }
        } 
    }
}