// https://codeforces.com/problemset/problem/230/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e6+7;
bool arr[N];
map<int, int> mp;

void sieve(){
    mp[2]++;
    for(int i = 3; i*i < N; i+=2){
        if(!arr[i]){
            for(int j = i*i; j < N; j+=i){
                arr[j] = true;
            }
        }
    }

    for(int i = 3; i < N; i+=2){
        if(!arr[i]){
            mp[i]++;
        }
    }
}

void run_case(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        ll y = sqrt(x);
        if(y*y == x && mp[y]) cout << "YES\n";
        else cout << "NO\n";
    }
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    // cin >> t;
    sieve();
    while(t--){
        run_case();
    }
    return 0;
}