#include <bits/stdc++.h>
#define Killua ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n,m,q;
    cin >> n >> m >> q;
    ll s[n + 1][m + 1];
    for (int i = 0; i <= n;i++){
        for (int j = 0; j <= m;j++){
            s[i][j] = 0;
        }
    }
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= m;j++){
            cin >> s[i][j];
        }
    }
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= m;j++){
            s[i][j] += s[i][j-1];
        }
    }

    for(int j = 1;j <= m;j++){
        for (int i = 1; i <= n;i++){
            s[i][j] += s[i - 1][j];
        }
    }

    while(q--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1] << endl;
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