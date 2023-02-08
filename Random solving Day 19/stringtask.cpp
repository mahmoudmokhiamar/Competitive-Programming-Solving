#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

bool TEST(char ch)
{
    ch = tolower(ch);
    if (ch !='a' & ch != 'o' && ch != 'i' && ch !='e' && ch != 'u' && ch!='y')
    {
        return true;
    }
    else
        return false;
}

int main()
{
    string str;
    cin >> str;
    string ans = "";
    for (auto ch : str)
    {
        if (TEST(ch))
        {
            ans += '.';
            ans +=tolower(ch); 
        }
    }
    cout << ans << el;  
}