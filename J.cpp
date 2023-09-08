
 // spoj.com/problems/TDPRIMES/en/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e8+7;
bitset<N> is_prime;
vector<int> primes;

void sieve(){
    primes.push_back(2);
    for(int i = 3; i * i < N; i++){
        if(!is_prime[i]){
            for(int j = i*i; j < N; j+=i){
                is_prime[j] = true;
            }
        }
    }

    for(int i = 3; i <= N-7; i+=2){
        if(!is_prime[i]){
            primes.push_back(i);
        }
    }
}


void run_case(){
    for(int i = 0; i < primes.size(); i+=100){
        cout << primes[i] << '\n';
    }
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    sieve();
    int t = 1;
    // cin >> t;
    while(t--){
        run_case();
    }
    return 0;
}