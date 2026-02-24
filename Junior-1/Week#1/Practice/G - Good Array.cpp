/**
 *    created: 10.01.2026 01:36:49
**/

#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define Kill ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define endl '\n'
#define cinv(v) for(auto &it:v) cin >> it;
using namespace std;
const ll MOD = 1e9+7;
const ll N = 1e6 + 5;

// Ebraaaaaaaaaaaaaaaaaa on the beat //

void Wdyyyyyyyyyyyyyyyyyy(){
  int n; cin >> n;
  vector<int>v(n);
  cinv(v);
  ll s = accumulate(all(v),0ll);
  ll mx = max(v[0],v[1]), mx2 = min(v[0],v[1]);
  for(int i = 2;i < n;i++){
    if(v[i] >= mx){
      mx2 = mx;
      mx = v[i];
    }
    else if(v[i] >= mx2){
      mx2 = v[i];
    }
  }

  vector<int> ans;
  for(int i = 0;i < n;i++){
    if(v[i] == mx){
      if(s - v[i] - mx2 == mx2){
        ans.push_back(i + 1);
      }
    }
    else{
      if(s - v[i] - mx == mx){
        ans.push_back(i + 1);
      }
    }
  }
  cout << ans.size() << endl;
  for(auto it:ans){
    cout << it << ' ';
  }

}

int main(){
  Kill
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  int tc = 1;
  // cin >> tc;
  for (int i = 1; i <= tc;i++)
  {
    // cout << "Case #" << i << ": ";
    Wdyyyyyyyyyyyyyyyyyy();
    if(i != tc) 
    cout << endl;
  }
  return 0;
}
