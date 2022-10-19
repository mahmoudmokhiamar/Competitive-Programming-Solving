#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

int n = 100;
vector<bool> generate_primes(){
    vector<bool> generated (n+1, 1);
    generated[0] = generated[1] = 0;
    for (int i = 2; i < n; i++)
    {
        if (generated[i])
        {
            for (int j = i*2; j < n; j +=i)
            {
                generated[j] = 0;
            }
        }
    }
    return generated;
}

int main()
{

   vector<bool> primes(n+1,1);
   primes = generate_primes();
   vector<int> prime_numbers;
   for (int i = 0; i < n; i++)
   {
    if (primes[i])
    {
        prime_numbers.push_back(i);
    }
   }
   
   int x,y; cin >> x >> y;
   int next_prime = *(upper_bound(prime_numbers.begin(),prime_numbers.end(),x));
   (y==next_prime)? cout << "YES" << el : cout << "NO" << el;
   
}