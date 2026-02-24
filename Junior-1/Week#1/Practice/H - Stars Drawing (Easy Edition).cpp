#include <bits/stdc++.h>
#define the_Flash ios_base::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    ll n, m;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }
    ll res_x[1000001], res_y[1000001], res_len[1000001];
    ll frq[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            frq[i][j] = 0;
        }
    }
    ll t = 0;
    for (int i = 1; i < n-1;i++){
        for (int j = 1; j < m-1;j++){
            if(arr[i][j] == '*' && arr[i][j+1] == '*' && arr[i][j-1] == '*' && arr[i+1][j] == '*'&& arr[i-1][j] == '*'){
                int cur = 1;
                res_x[t] = i + 1;
                res_y[t] = j + 1;
                while((i+cur<n&&i-cur>=0&&j-cur>=0&&j+cur<m)&&arr[i][j+cur] == '*' && arr[i][j-cur] == '*' && arr[i+cur][j] == '*'&& arr[i-cur][j] == '*'){
                    res_len[t]++;
                    frq[i][j]=1;
                    frq[i][j-cur]=1;
                    frq[i][j+cur]=1;
                    frq[i+cur][j]=1;
                    frq[i-cur][j]=1;
                    cur++;
                }
                t++;
            }
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(arr[i][j] == '*' && frq[i][j] == 0){
                cout << -1;
                return;
            }
        }
    }
    cout << t << endl;
    for (int i = 0; i < t;i++){
        cout << res_x[i] << ' ' << res_y[i] << ' ' << res_len[i] << endl;
    }
}

int main()
{
    //the_Flash
    //freopen("mex.in", "r", stdin);
    int tc = 1;
    //cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}
