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
    string num; cin >> num;
    bool ans = true;
    int n = num.size();
    int cnt = 1;
    if (num[0] != '1')
    {
        cout << "NO" << el;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (i != n-1 && num[i] == '1' && num[i+1] == '1')
        {
            continue;
        }
        if (num[i] != '1' && num[i] != '4')
        {
           ans = false;
           cout << "NO"  << el;
           return 0;
        }
        else if(i != n-1 && num[i] == '1' && num[i+1] == '4')
        {
            i++;
            while (num[i] == '4')
            {
               if (cnt > 2)
               {
                 ans = false;
                 cout << "NO" << el;
                 return 0;
               }
               cnt++;
               i++; 
            }
            i--;
            cnt = 1;
        }
    }
    (ans) ? cout << "YES" : cout << "NO" <<el;
}