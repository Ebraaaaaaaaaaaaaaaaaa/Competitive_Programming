#include <bits/stdc++.h>
#define Killua ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n, k;cin >> n >> k;
    string s;cin >> s;
    for(int i = 'a';i <= 'z' && k;i++){
        for (int j = 0; j < s.length() && k;j++){
            if(s[j] == i){
                s.erase(j,1);
                k--;
                j--;
            }
        }
    }
    cout << s;
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
