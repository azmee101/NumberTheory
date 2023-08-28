
// https://codeforces.com/problemset/problem/1051/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void run_case(){
    ll l, r; cin >> l >> r;
    cout << "YES" << '\n';
    for(ll i = l; i <= r; i+=2){
        cout << i << ' ' << i+1 << '\n';
    }
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