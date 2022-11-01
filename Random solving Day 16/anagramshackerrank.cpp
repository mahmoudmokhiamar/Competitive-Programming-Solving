#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

void solve()
{

    string str1;
    string str2;
    cin >> str1 >> str2;
    map<char,int> freq1;
    map<char,int> freq2;

    for (auto ch : str1)
    {
        freq1[tolower(ch)]++;
    }
    for (auto ch : str2)
    {
        freq2[tolower(ch)]++;
    }
    for (auto mm : freq1)
    {
        char letter = mm.first;
        if (freq1[letter] != freq2[letter])
        {
            cout << "Not Anagrams" << el;
            return;
        }        
    }
    for (auto mm : freq2)
    {
        char letter = mm.first;
        if (freq1[letter] != freq2[letter])
        {
            cout << "Not Anagrams" << el;
            return;
        }        
    }
    cout << "Anagrams" <<el;
}


int main()
{
    FIO
    solve();
}