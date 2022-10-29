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
    string str1,str2,str3;
    cin >> str1 >> str2 >> str3;
    map<char,int> ocurr;
    map<char,int> ocurr2;

    for (auto ch : str1)
    {
        ocurr[ch]++;
    }
    for (auto ch : str2)
    {
        ocurr[ch]++;
    }
    for (auto ch : str3)
    {
        ocurr2[ch]++;
    }
    for (auto mm : ocurr)
    {
        char letter = mm.first;
        if ((ocurr[letter] < ocurr2[letter]) || ocurr[letter] > ocurr2[letter])
        {
            cout << "NO" << el;
            return 0;
        }
    }
    for (auto mm : ocurr2)
    {
        char letter = mm.first;
        if (ocurr[letter] == 0)
        {
           cout << "NO" << el;
           return 0;
        }  
    }
    cout << "YES" << el;
}