#include <bits/stdc++.h>
#define Killua ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n, q;cin >> n >> q;
    vector<ll> v;
    for (int i = 0; i < n;i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }
    v.shrink_to_fit();
    while(q--){
        string s;
        cin >> s;
        if(s == "pop_back"){
            v.pop_back();
            continue;
        }
        if(s == "sort"){
            int l, r;cin >> l >> r;
            l--, r;
            sort(v.begin() + l, v.begin() + r);
            continue;
        }
        if(s == "reverse"){
            int l, r;cin >> l >> r;
            l--, r;
            reverse(v.begin() + l, v.begin() + r);
            continue;
        }
        if(s == "push_back"){
            ll ppp;cin >> ppp;
            v.push_back(ppp);
            continue;
        }
        if(s == "front"){
            cout << v.front() << endl;
            continue;
        }
        if(s == "back"){
            cout << v.back() << endl;
            continue;
        }
        if(s == "print"){
            int ppp;cin >> ppp;
            cout << v[ppp - 1] << endl;
            continue;
        }
    }
}

int main(){
    Killua
    //freopen("mex.in", "r", stdin);
    int tc = 1;
    //cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}