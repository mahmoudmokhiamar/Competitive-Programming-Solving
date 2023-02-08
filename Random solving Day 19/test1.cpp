#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;
void del_extra_spaces(string &in){
    int sz = in.size();
    for (int i = 0; i < sz; i++)
    {
        if(in[0] == ' '){
            in.erase(0,1);
        }
        if (in[i] == ' ' && in[i+1] == ' ')
        {
            in.erase(i,1);
        }  
    }
}
int main()
{
    string str; 
    cin >> str;
    int sz = str.size();
    string ans = "";
    for (int i = 0; i < sz; i++)
    {
        if (str.substr(i,3) == "WUB")
        {
            i +=2;
            ans += ' ';
        }
        else
        {
            ans +=str[i];
        }
        
    }
    //deleting extra spaces
    del_extra_spaces(ans);
    
    cout << ans << el;
    
}