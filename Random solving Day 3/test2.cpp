#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;
 
 
int main()
{
 
    int n ; cin >> n;
    vector < int > studs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> studs[i];
    }
    sort(studs.begin(),studs.end());
    int ans = 0;
     if(studs[0] == studs[n-1]){
            ans = n;
            cout << ans << el;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        auto result  = upper_bound(studs.begin(),studs.end(),studs[i]+5);
        int distance = result-studs.begin()-i;
        // cout << (studs.end() == result) << el;
        // cout << distance << "yaw" << el;
        ans = max(ans,distance);
        if (result != studs.end() && studs[result-studs.begin()] > studs[i])
        {
            ans = max(ans,distance);
            // cout << ans  << "hehe"<< el;
        }
        // else if(result == studs.end() && ans!= n){
        // }
        // else if(i!= n-1 && result == studs.end() && studs[i] == studs[i+1]){
        //     ans = n;
        //     cout << ans << "entered" << el;
        //     break;
        // }
        else if(i!= n-1 && studs[i] == studs[i+1])
        {
           int j = i+1;
           int cnt2 = 0;
           while (j<n && studs[i] == studs[j])
           {
                cnt2++;
                j++;
           }
           ans = max(ans,cnt2);
        }
    }
    cout << ans << el;
    
    
}