#include <bits/stdc++.h>
#define Killua ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    string s;cin >> s;
    int q;cin >> q;
    int a[s.length() + 1]{0};
    for (int i = 1; i <= s.length();i++){
        if(s[i-1] == 'a'){
            a[i]++;
        }
        a[i] += a[i - 1];
    }
    while(q--){
        int x, y;cin >> x >> y;
        cout << a[y] - a[x-1] << endl;
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