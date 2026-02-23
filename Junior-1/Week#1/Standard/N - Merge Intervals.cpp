#include <bits/stdc++.h>
#define Kill ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define endl '\n'
using namespace std;

// Ebraaaaaaaaaaaaaaaaaa on the beat //

void Wdyyyyyyyyyyyyyyyyyy(){
  int n;
  cin >> n;
  vector<pair<int,int>> v(n);
  for(auto &[i,t]:v){
    cin >> i >> t;
  }
  sort(all(v));
  pair<int,int> p = v[0];
  for(int i = 1;i < n;i++){
    if(v[i].first <= p.second){
      p.second = max(v[i].second,p.second);
    }
    else{
      cout << p.first << ' ' << p.second << endl;
      p = v[i];
    }
  }
  cout << p.first << ' ' << p.second << endl;
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