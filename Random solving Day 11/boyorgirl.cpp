#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

void solve()
{
    string name;
    cin >> name;
    set<char> st;
    for (auto ch : name)
    {
        st.insert(ch);
    }
    ((int)st.size()%2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
    
}

int main() 
{
    
    FIO
    solve();

}