#include <bits/stdc++.h>
#define Killua ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    ll n, q;
    cin >> n >> q;
    ll a[n + 1]{0};
    for (int i = 1; i <= n;i++){
        ll pp;
        cin >> pp;
        a[i] = a[i - 1] + pp;
    }
    while(q--){
        int x, y;
        cin >> x >> y;
        cout << a[y] - a[x - 1] << endl;
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