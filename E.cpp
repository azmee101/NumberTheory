
// Problem Link : https://vjudge.net/problem/Gym-310911E/origin

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+1;
int spf[N];


void smallest_prime_factor(){
    for(int i = 2; i < N; i++){
        spf[i] = i;
    }
    for(int i = 2; i < N; i++){
        if(spf[i] == i){
            for(int j = i; j < N; j+=i){
                spf[j] = min(spf[j], i);
            }
        }
    }
}


void run_case(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        int x = arr[i];

        cout << spf[x] << ' ';
        
        int gpf = 1;
        int distinct_prime_factors = 0;
        int total_prime_factors = 0;
        int num_of_divisors = 1;
        int sum_of_all_divs = 1;

        while(x > 1){
            int p = spf[x];
            gpf = max(gpf, spf[x]);
            distinct_prime_factors++;
            int power_of_each_prime = 0;
            int power_of_each_prime2= 1;
            while(x % p == 0){
                total_prime_factors++;
                power_of_each_prime++;
                power_of_each_prime2 *= p;
                x /= p;
            }
            num_of_divisors *= (power_of_each_prime + 1);
            sum_of_all_divs *= (1LL * power_of_each_prime2 * p -1) / (p - 1);
        }
        cout << gpf << ' ';
        cout << distinct_prime_factors << ' ';
        cout << total_prime_factors << ' ';
        cout << num_of_divisors << ' ';
        cout << sum_of_all_divs << '\n';
    }
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    smallest_prime_factor();
    int t = 1;
    // cin >> t;
    while(t--){
        run_case();
    }
    return 0;
}
