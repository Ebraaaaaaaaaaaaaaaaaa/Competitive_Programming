#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n;
    cin >> n;
    int q = 1e5 + 1;
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    int zeros = 0;
    while(zeros < mp.size()){
        zeros = 0;
        for(auto it:mp){
            if(mp[it.first] > 0)
            cout << it.first << ' ';
            else
                zeros++;
            mp[it.first]--;   
        }
        cout << endl;
    }
}

int main()
{
    int tc = 1;
    //cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}
