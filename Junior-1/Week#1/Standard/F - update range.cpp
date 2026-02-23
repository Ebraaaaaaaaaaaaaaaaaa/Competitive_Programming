#include <bits/stdc++.h>
#define Killua ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n, q;cin >> n >> q;
    ll a[n+5]{0};
    ll b[n + 5]{0};
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    while(q--){
        int x, y, v;cin >> x >> y >> v;
        b[x] += v;
        b[y + 1] -= v;
    }
    for (int i = 1; i <= n;i++){
        b[i] += b[i - 1];
        a[i] += b[i];

        cout << a[i] << ' ';
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