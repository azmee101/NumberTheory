
// https://vjudge.net/problem/Gym-310911G/origin

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;
int divisors[N];

void run_case(){
    int n; cin >> n;
    int arr[n];
    int cnt[N] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cnt[arr[i]]++;
    }
    for(int i = 1; i < N; i++){
        for(int j = i; j < N; j+=i){
            divisors[i] += cnt[j];
        }
    }
    for(int i = 1; i <= N-7; i++){
        cout << divisors[i] << '\n';
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