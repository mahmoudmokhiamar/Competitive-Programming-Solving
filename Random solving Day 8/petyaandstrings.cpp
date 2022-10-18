#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main()
{

    string str1,str2;
    cin >> str1 >> str2;
    int sz = (int)str1.size();
    for (int i = 0; i < sz; i++)
    {
        if(str1.at(i) == str2.at(i) || tolower(str1.at(i)) == str2.at(i) || str1.at(i) == tolower(str2.at(i)))
        {
            continue;
        }
        else if(tolower(str1.at(i)) > tolower(str2.at(i)))
        {
            cout << 1 << el;
            return 0;
        }
        else if(tolower(str2.at(i)) > tolower(str1.at(i))){
            cout << -1 << el;
            return 0;
        }
    }   
    cout << 0 << el;
}