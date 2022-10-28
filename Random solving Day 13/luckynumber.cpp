#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


bool checkLucky(int num){
    if (num == 0)
    {
        return false;
    }
    while (num > 0)
    {
        
        int last_digit = num%10;
        if (last_digit != 4 && last_digit != 7)
        {
            return false;
        }
        num/=10; 
    }
    return true;
}
int main()
{
    FIO
    string num; cin>> num;
    int cnt = count(num.begin(),num.end(),'4')+count(num.begin(),num.end(),'7');
    (checkLucky(cnt))? cout << "YES" : cout << "NO";  
}