#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
const int N = 1e5+5;
using namespace std;

void print_matrix(int array[5][5]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << array[i][j];
        }
        cout << el;
    }
}
int main(){


    int arr[5][5];
    int pos_r;
    int pos_c;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                pos_r = i;
                pos_c = j;
            }  
        }
    }
    int moves = 13 - (pos_c+(pos_r)*5) - 1;
    cout << moves << el;
}