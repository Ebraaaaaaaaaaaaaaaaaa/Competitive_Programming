#include <bits/stdc++.h>
#define ll long long
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int mn = INT_MAX;
    for (int i = 0;i<n;i++){
        if(i == 0){
            mn = min(mn, a[n - 1] - a[1]);
        }
        else if(i == n-1){
            mn = min(mn, a[n - 2] - a[0]);
        }
        else{
            mn = min(mn, a[n - 1] - a[0]);
        }
    }
    cout << mn;
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
