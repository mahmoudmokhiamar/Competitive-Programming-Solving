#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
         if (arr[i][j]%2==1)
            {
                arr[i][j] += 1;
                if (j == 0)
                {
                    if (arr[i][j+1]%2==1) arr[i][j+1]+=1;
                    else arr[i][j+1]-=1;
                    if (arr[i][j+2]%2==1) arr[i][j+2]+=1;
                    else arr[i][j+2] -=1;
                }
               else if (j == 1)
                {
                    if (arr[i][j-1]%2==1) arr[i][j-1]+=1;
                    else arr[i][j-1]-=1;
                    if (arr[i][j+1]%2==1) arr[i][j+1]+=1;
                    else arr[i][j+1] -=1;
                }
                else if (j == 2)
                {
                    if (arr[i][j-1]%2==1) arr[i][j-1]+=1;
                    else arr[i][j-1]-=1;
                    if (arr[i][j-2]%2==1) arr[i][j-2]+=1;
                    else arr[i][j-2] -=1;
                }
                if (i == 0)
                {
                    if (arr[i+1][j]%2==1) arr[i+1][j]+=1;
                    else arr[i+1][j]-=1;
                    if (arr[i+2][j]%2==1) arr[i+2][j]+=1;
                    else arr[i+2][j] -=1;
                }
               else if (i == 1)
                {
                    if (arr[i-1][j]%2==1) arr[i-1][j]+=1;
                    else arr[i-1][j]-=1;
                    if (arr[i+1][j]%2==1) arr[i+1][j]+=1;
                    else arr[i+1][j] -=1;
                }
               else if (i == 2)
                {
                    if (arr[i-1][j]%2==1) arr[i-1][j]+=1;
                    else arr[i-1][j]-=1;
                    if (arr[i-2][j]%2==1) arr[i-2][j]+=1;
                    else arr[i-2][j] -=1;
                }
            }    
         else if (arr[i][j]%2==0)
            {
                arr[i][j] -= 1;
                if (j == 0)
                {
                    if (arr[i][j+1]%2==1) arr[i][j+1]+=1;
                    else arr[i][j+1]-=1;
                    if (arr[i][j+2]%2==1) arr[i][j+2]+=1;
                    else arr[i][j+2] -=1;
                }
               else if (j == 1)
                {
                    if (arr[i][j-1]%2==1) arr[i][j-1]+=1;
                    else arr[i][j-1]-=1;
                    if (arr[i][j+1]%2==1) arr[i][j+1]+=1;
                    else arr[i][j+1] -=1;
                }
               else if (j == 2)
                {
                    if (arr[i][j-1]%2==1) arr[i][j-1]+=1;
                    else arr[i][j-1]-=1;
                    if (arr[i][j-2]%2==1) arr[i][j-2]+=1;
                    else arr[i][j-2] -=1;
                }
                if (i == 0)
                {
                    if (arr[i+1][j]%2==1) arr[i+1][j]+=1;
                    else arr[i+1][j]-=1;
                    if (arr[i+2][j]%2==1) arr[i+2][j]+=1;
                    else arr[i+2][j] -=1;
                }
               else if (i == 1)
                {
                    if (arr[i-1][j]%2==1) arr[i-1][j]+=1;
                    else arr[i-1][j]-=1;
                    if (arr[i+1][j]%2==1) arr[i+1][j]+=1;
                    else arr[i+1][j] -=1;
                }
              else if (i == 2)
                {
                    if (arr[i-1][j]%2==1) arr[i-1][j]+=1;
                    else arr[i-1][j]-=1;
                    if (arr[i-2][j]%2==1) arr[i-2][j]+=1;
                    else arr[i-2][j] -=1;
                }
            }    
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]%2 == 0)
            {
                cout << "1";
            }
            else {
                cout << "0";
            }
        }
        cout << el; 
    }
}