
// https://codeforces.com/contest/749/problem/A

#include <bits/stdc++.h>
using namespace std;

void run_case(){
    int n; cin >> n;
    int div = n/2;
    if(!(n & 1)){
        cout << div << '\n';
        while(div--){
            cout << 2 << ' ';
        }
        cout << '\n';
    }
    else{
        cout << div << '\n';
        div -= 1;
        while(div--){
            cout << 2 << ' ';
        }
        cout << 3 << '\n';
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