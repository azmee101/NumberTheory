#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;
vector<int> primes;
vector<int> filter_prime;
vector<int> ans;
bool arr[N];

void sieve(){
    filter_prime.push_back(2);
    for(int i = 3; i*i < N; i+=2){
        if(!arr[i]){
            for(int j = i*i; j < N; j+=i){
                arr[j] = true;
            }
        }
    }
    for(int i = 3; i <= N-7; i+=2){
        if(!arr[i]){
            primes.push_back(i);
        }
    }
    for(int i = 0; i < primes.size(); i++){
        int x = primes[i], n = 10;
        bool flag = false;
        while(x){
            if(x%n == 0){
                flag = true;
                break;
            }
            x /= n;
        }
        if(!flag) filter_prime.push_back(primes[i]);
    }
    for(int i = 0; i < filter_prime.size(); i++){
        int x = filter_prime[i], n = 10;
        bool flag = true;
        while(x){
            int y = x % n;
            if(y == 0) y = x;
            if(arr[y]){
                flag = false;
                break;
            }
            x /= n;
        }
        if(flag) ans.push_back(filter_prime[i]);
    }
}

void run_case(){
    int n;
    cin >> n;
    auto it = upper_bound(ans.begin(), ans.end(), n);
    cout << it - ans.begin() << '\n';
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    sieve();
    int t = 1;
    cin >> t;
    while(t--){
        run_case();
    }
    return 0;
}