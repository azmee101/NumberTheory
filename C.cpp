
// https://onlinejudge.org/external/1/136.pdf

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const ll MAX = 1e9+7;

void run_case(){
    vector<ll> v;
    int cnt = 0;
    for(ll i = 1, p = 1; i <= 60; i++, p*=2){
        for(ll j = 1; p*j <= MAX; j*=3){
            for(ll k = 1; p*j*k <= MAX; k*=5){
                v.push_back(p*j*k);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << "The 1500'th ugly number is " << v[1499] << '.' << '\n';
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
        run_case();
    }
    return 0;
}