#include <bits/stdc++.h>
#define Killua ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n, k;
    cin >> n >> k;
    vector<ll> ref;
    for (int i = -1*k; i <= k;i++){
        ref.push_back(i);
    }
    set<ll> a;
    for (int i = 0; i < n;i++){
        ll x;
        cin >> x;
        if(x <= k && x >= -1*k){
            a.insert(x);
        }
    }
    for (int i = 0; i < ref.size();i++){
        if(!a.count(ref[i])){
            cout << ref[i];
            return;
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