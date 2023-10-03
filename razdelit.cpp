#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
//code by DimonTheGood
using namespace std;
int main(){
    ios::sync_with_stdio(); cin.tie(), cout.tie();
    ll n; cin >> n;
    ll res = 1; ll lol = 1;
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    while(res < n){
        res *= 2;
        if(res > n){
            break;
        }
        lol++;
    }
    cout << lol << endl;
}
