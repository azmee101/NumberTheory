

// https://vjudge.net/contest/474218#problem/K

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void run_case(){
    ll n, m, l, r;
    cin >> n >> m >> l >> r;
    
    ll strt, end, mn = (n / __gcd(m, n)) * m;

    if(m > r/n){  // n > r/m   // means m*n > r
        cout << 0 << '\n';
        return;
    }
    if(mn < l){
        if(l % (mn) == 0) strt = l;
        else{
            ll x = l/mn + 1;
            strt = mn * x;
        }
    }
    else strt = mn;
    end = mn * (r / mn);
    
    cout << ((end/mn) - (strt/mn)) + 1  << '\n';
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