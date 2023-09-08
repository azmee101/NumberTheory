

// https://www.spoj.com/status/ns=31811523


#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;
bool arr[N];
vector<int> primes;
vector<int> ans;


bool zero(int x){
    int n = 10;
    while(x){
        if(x%10 == 0) return false;
        x /= 10;
    }
    return true;
}


bool all_prime(int x){
    int n = 10;
    while(n < x){
        if(arr[x % n] == true) return false;
        n *= 10;
    }
    if(arr[x] == true) return false;
    return true;
}


void sieve(){
    arr[1] = true;
    primes.push_back(2);
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
        int x = primes[i];
        bool flag1 = zero(x), flag2 = all_prime(x);
        if(flag1 && flag2) ans.push_back(primes[i]);
    }
}

void run_case(){
    int n; cin >> n;
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