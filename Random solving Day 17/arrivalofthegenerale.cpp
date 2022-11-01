#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


void solve()
{
    
    int n ; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = 0;
    int max = n-1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[min])
        {
            min = i;
        }
        if (arr[i] >= arr[max])
        {
            max = i;  
        }
    }
    if (max > min)
    {
        min++;
    }
    
    ans = max - 1  + n - min;
    cout << ans << el;
}


int main()
{

    solve();

}