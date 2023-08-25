
// https://www.codechef.com/problems/FLOW016

#include <bits/stdc++.h>
using namespace std;

void run_case(){
    int a, b; cin >> a >> b;
    int GCD = __gcd(a, b);
    int LCM = (a * b) / GCD;
    cout << GCD << ' ' << LCM << '\n';
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--){
        run_case();
    }
    return 0;
}
