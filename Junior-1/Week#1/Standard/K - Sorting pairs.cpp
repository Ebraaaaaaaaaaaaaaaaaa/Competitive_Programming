#include <bits/stdc++.h>
#define Killua ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

bool comp(pair<string,ll> a ,pair<string,ll> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n;cin >> n;
    vector<pair<string, ll>> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < n;i++){
        cout << v[i].first << ' ' << v[i].second << endl;
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