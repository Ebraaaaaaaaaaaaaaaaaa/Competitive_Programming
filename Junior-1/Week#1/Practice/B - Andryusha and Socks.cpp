#include <bits/stdc++.h>
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    int n;
    cin >> n;
    set<int> st;
    set<int> mx;
    int pre[n * 2 + 1]{0};
    for (int i = 1; i < n*2;i++){
        int x;
        cin >> x;
        if(st.count(x)){
            pre[i] += pre[i - 1] - 1;
        }
        else{
            pre[i] = pre[i - 1] + 1;
            st.insert(x);
            mx.insert(pre[i]);
        }
    }
    cout << *mx.end();
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
