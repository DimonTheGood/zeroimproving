//Code by DimonTheGood
//problem: https://codeforces.com/contest/357/problem/B
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define mp make_pair
#define vti vector<int>
#define pb push_back
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n, m; cin >> n >> m;
	vector<int> xd(n);
	while(m--){
        vector<int> col = {1, 2, 3};
        int a, b, c; cin >> a >> b >> c;
        if(xd[a - 1] != 0){
            col.erase(col.begin() + (xd[a - 1] - 1));
            a = 0;
        }
        if(xd[b - 1] != 0){
            col.erase(col.begin() + (xd[b - 1] - 1));
            b = 0;
        }
        if(xd[c - 1] != 0){
            col.erase(col.begin() + (xd[c - 1] - 1));
            c = 0;
        }
        if(a != 0){
            for(auto elem : col){
                xd[a - 1] = elem;
                col.erase(col.begin());
                break;
            }
        }
        if(b != 0){
            for(auto elem : col){
                xd[b - 1] = elem;
                col.erase(col.begin());
                break;
            }
        }
        if(c != 0){
            for(auto elem : col){
                xd[c - 1] = elem;
                col.erase(col.begin());
                break;
            }
        }
        for(auto elem : col){
            cout << elem << " ";
        }cout << endl;
	}
    for(auto elem : xd){
        cout << elem << " ";
    }cout << endl;
	return 0;
}
