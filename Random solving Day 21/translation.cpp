#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

void rev_string(string &test)
{
    string rev_str;
    rev_str = "";
    for (auto i = test.rbegin(); i < test.rend(); i++)
    {
        rev_str += *i;
    } 
    test = rev_str;
}

int main()
{
    string in,reversed;
    cin >> in;
    cin >> reversed;
    rev_string(in);
    (in == reversed) ? cout << "YES" : cout << "NO";

}