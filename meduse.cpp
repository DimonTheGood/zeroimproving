//Code by DimonTheGood
//problem: https://codeforces.com/contest/1875/problem/B
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define mp make_pair
#define vti vector<int>
#define pb push_back
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t; cin >> t; ll tt = t;
	while(tt--){
        ll n1, n2, a; cin >> n1 >> n2 >> a;
        vector<ll> xd(n1);
        vector<ll> xd2(n2);
        for(ll i = 0; i < n1; i++) cin >> xd[i];
        for(ll i = 0; i < n2; i++) cin >> xd2[i];
        sort(xd.begin(), xd.end());
        sort(xd2.begin(), xd2.end());
        if(a % 2 == 0){
            if(xd2[xd2.size() - 1] >= xd[0]){
                ll t = xd[0];
                xd[0] = xd2[xd2.size() - 1];
                xd2[xd2.size() - 1] = t;
                sort(xd.begin(), xd.end());
                sort(xd2.begin(), xd2.end());
            }
            if(xd[xd.size() - 1] >= xd2[0]){
                ll t = xd2[0];
                xd2[0] = xd[xd.size() - 1];
                xd[xd.size() - 1] = t;
            }
        }else{
            if(xd2[xd2.size() - 1] >= xd[0]){
                ll t = xd[0];
                xd[0] = xd2[xd2.size() - 1];
                xd2[xd2.size() - 1] = t;
            }
        }
        ll sum = 0;
        for(auto elem : xd){
            sum = (long long)sum + elem;
        }
        cout << sum << endl;
	}
	return 0;
}
