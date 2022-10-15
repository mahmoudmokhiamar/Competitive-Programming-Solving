#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;
 
bool OK(int mid){
    set<int> st;
    while (mid > 0)
    {
        st.insert(mid%10);
        mid /= 10;
    }
    return (int)st.size() == 4;
}
int main()
{
    
    int year; cin >> year;
    int ans = year + 1;
    while (ans <= 1e5)
    {
        if (OK(ans))
        {
            break;
        }
        ans++;
    }
    
    cout << ans << el;
    
}