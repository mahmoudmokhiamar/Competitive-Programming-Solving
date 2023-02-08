#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

vector < ll > fib(90);
void gen()
{
    fib[0] = 1;
    fib[1] = 1;
    
    for (ll i = 2; i < 90; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
}
int search_fib(ll num)
{
    int n_idx;
    for (int i = 0; i < 90; i++)
    {
        if (fib[i]==num)
        {
            n_idx = i;
            break;
        }
    }
    return n_idx;
}  

int main()
{
    gen();
    vector < ll > ans;
    int n;
    cin >> n;
    int n_idx = search_fib(n);
    if (n == 0)
    {   
        cout << 0 << ' ' << 0 << ' ' << 0 << el;
        return 0;
    }
    else if(n == 1)
    {
       cout << 1 << ' ' << 0 << ' ' << 0 << el;   
       return 0;
    }
    else if(n == 2)
    {
       cout << 2 << ' ' << 0 << ' ' << 0 << el;
       return 0;   
    }
    else if (n == 3)
    {
        ans.push_back(1);
        ans.push_back(1);
        ans.push_back(1);
    }
    else
    {
        ans.push_back(fib[n_idx-1]);
        ans.push_back(fib[n_idx-3]);
        ans.push_back(fib[n_idx-4]);
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    
    
}