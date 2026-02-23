#include <bits/stdc++.h>
#define Killua ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a;
    set<int> check;
    for (int i = 0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
        check.insert(x);
    }
    if(check.size() < k){
        cout << "NO";
        return;
    }
    cout << "YES" << endl;
    set<int> taken;
    for (int i = 0,j = 0; i < n && j < k;i++){
        if(!taken.count(a[i])){
            cout << i + 1 << ' ';
            j++;
            taken.insert(a[i]);
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