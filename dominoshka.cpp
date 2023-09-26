#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
//code by DimonTheGood :33
//problem: https://codeforces.com/contest/405/problem/B
int main(){
    ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int t; cin >> t;
    vector<char> xd(t);
    for(int i = 0; i < t; i++) cin >> xd[i];
    int pos = 0; ll res = 0; bool l = false; bool r = false; int shag = 0;
    int pos2 = 0;
    if(t == 1 && xd[0] == '.'){
        cout << 1 << endl;
        return 0;
    }else if(t == 1 && xd[0] != '.'){
        cout << 0 << endl;
        return 0;
    }
    if(count(xd.begin(), xd.end(), 'L') == 0 && count(xd.begin(), xd.end(), 'R') == 0){
        cout << xd.size() << endl;
        return 0;
    }
    ll counter = 0; ll posss = 0;
    for(int i = 0; i < t; i++){
        if(xd[i] == '.') counter++;
        if(xd[i] == 'L'){
            posss = i;
            counter = 0;
            break;
        }
        if(xd[i] == 'R'){
            posss = i;
            break;
        }
    }
    res += counter;
    for(int i = posss; i < t; i++){
        if(xd[i] == 'L'){
            l = true;
            if(r == true){
                if((i - pos) % 2 == 0 && i - pos > 1){
                  res++;
                  r = false;
                }
            }
        }
        if(xd[i] == '.' && l == true){
            res++;
        }
        if(xd[i] == 'R'){
            pos = i;
            l = false;
            r = true;
        }
        //cout << res << " " << i << endl;
    }
    cout << res << endl;
}



