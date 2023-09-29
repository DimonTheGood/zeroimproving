//Code by DimonTheGood
//problem: https://codeforces.com/contest/288/problem/A
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define mp make_pair
#define vti vector<int>
#define pb push_back
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	vector<char> alph = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
	'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	string xd = "";
	string xd2 = "";
	ll a, b; cin >> a >> b;
	if(a < b  || (a != 1 && b == 1) || b > 26){
        cout << -1 << endl;
        return 0;
	}else if(b == 1 && a == 1){
        cout << 'a' << endl;
        return 0;
	}
	else{
	    for(ll i = b - 1; i >= 2; i--){
            xd += alph[i];
	    }
	    for(ll i = 1; i <= a - xd.size(); i++){
            if(i % 2 == 0){
                xd2 += alph[1];
            }else{
                xd2 += alph[0];
            }
	    }
	}
	reverse(xd.begin(), xd.end());
	xd2 += xd;
	cout << xd2 << endl;
	return 0;
}
