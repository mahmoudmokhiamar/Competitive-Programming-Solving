#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main(){

    FIO
    string word; cin >> word;
    int cnt = 0;
    int sz = (int)word.size();
    for (auto ch : word)
    {
        if(isupper(ch))cnt++;
    }
    if (cnt > sz/2)
    {
        for (int i = 0; i < sz; i++)
        {
            word[i] = toupper(word[i]);
        }
    }
    else
    {
        for (int i = 0; i < sz; i++)
        {
            word[i] = tolower(word[i]);
        }
        
    }
    cout << word << el;
}