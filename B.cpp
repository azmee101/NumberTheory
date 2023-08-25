
// https://codeforces.com/contest/762/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void run_case(){
    ll n;
    int k;
    vector<ll> div;
    cin >> n >> k;
    
    if(k > n){
        cout << -1 << '\n';
        return;
    }

    div.push_back(1);
    
    for(ll i = 2; i*i <= n; i++){
        if(n%i == 0){
            div.push_back(i);
            if(i != (n/i)){
                div.push_back(n/i);
            }
        }
    }

    div.push_back(n);

    sort(div.begin(), div.end());
    
    if(k > div.size()) cout << -1 << '\n';
    else cout << div[k-1] << '\n';
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