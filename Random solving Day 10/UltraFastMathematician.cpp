#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

int main(){

    FIO
    string num1, num2,ans;
    cin >> num1>>num2;

    for (int i = 0; i < num1.size(); i++)
    {
        if (num1[i] == num2[i])
            ans.push_back('0');
        else
            ans.push_back('1');
    }
    cout << ans << el;
    
}