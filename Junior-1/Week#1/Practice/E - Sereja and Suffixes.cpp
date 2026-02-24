#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n, q;
    cin >> n >> q;
    int arr[n];
    int res[n];
    int frq[100001] {0};
    int cnt = 0;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0;i--){
        frq[arr[i]]++;
        cnt += (frq[arr[i]] == 1);
        res[i] = cnt;
    }

    for (int i = 0; i < q; i++){
        int x;
        cin >> x;
        cout << res[x - 1] << endl;
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
