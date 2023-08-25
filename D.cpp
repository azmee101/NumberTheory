
// https://codeforces.com/problemset/problem/1203/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void run_case(){
    int n; cin >> n;
    ll arr[n];
    ll x = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        x = __gcd(x, arr[i]);
    }
    int cnt = 0;
    for(ll i = 1; i*i <= x; i++){
        if(x % i == 0){
            cnt++;
            if(i != x/i) cnt++;
        }
    }
    cout << cnt << '\n';
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