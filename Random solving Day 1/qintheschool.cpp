#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

int main()
{

    vector<char> v = {'a','e','i','o','u'};

    swap(v[0],v[1]);
    for (auto i : v)
    {
        cout << i << " ";
    }
    
}