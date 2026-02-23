#include <bits/stdc++.h>
#define Killua ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;
struct grades{ string name; ll total; ll a; ll b; ll c; ll d;};
bool comp(grades a , grades b){
    if(a.total == b.total){
        return a.name < b.name;
    }
    return a.total > b.total;
}

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n;
    cin >> n;
    vector<grades> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i].name >> v[i].a >> v[i].b >> v[i].c >> v[i].d;
        v[i].total = v[i].a + v[i].b + v[i].c + v[i].d;
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < n;i++){
        cout << v[i].name << ' ' << v[i].total << ' ' << v[i].a << ' ' << v[i].b << ' ' << v[i].c << ' ' << v[i].d << endl;
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