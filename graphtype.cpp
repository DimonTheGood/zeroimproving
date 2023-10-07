#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ios::sync_with_stdio(); cin.tie(); cout.tie();
    ll t; cin >> t;
    while(t--){
        ll n, m, k; cin >> n >> m >> k;
        vector<ll> way(k);
        vector<int> gr[n + 1];
        for(ll i = 0; i < k; i++) cin >> way[i];
        while(m--){
            ll a, b; cin >> a >> b;
            gr[a].push_back(b);
            gr[b].push_back(a);
        }
        ll start = way[0];
        ll finish = way[way.size() - 1];
        bool f1 = false;
        for(ll i = 0; i < way.size() - 1; i++){
            bool f = false;
            for(auto elem : gr[way[i]]){
                if(elem == way[i + 1]){
                    f = true;
                    f1 = true;
                    break;
                }
            }
            if(!f){
                f1 = false;
                break;
            }
        }
        //cout << f1 << endl;
        if(!f1){
            cout << "none" << endl;
        }else{
            vector<ll> xd = way;
            sort(xd.begin(), xd.end());
            xd.erase(unique(xd.begin(), xd.end()), xd.end());
            if(xd.size() == (way.size() - 1) && start == finish){
                cout << "simple cycle" << endl;
            }else if(xd.size() != (way.size() - 1) && start == finish){
                cout << "cycle" << endl;
            }else if(xd.size() != way.size() && start != finish){
                cout << "path" << endl;
            }else{
                cout << "simple path" << endl;
            }
        }
    }
}
