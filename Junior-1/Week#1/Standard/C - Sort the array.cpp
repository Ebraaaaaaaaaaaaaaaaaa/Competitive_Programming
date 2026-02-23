#include <bits/stdc++.h>
#define Killua ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n;cin >> n;
    ll a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n;i++){
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