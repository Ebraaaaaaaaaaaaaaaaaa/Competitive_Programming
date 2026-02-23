#include <bits/stdc++.h>
#define Kill ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
using namespace std;

// Ebraaaaaaaaaaaaaaaaaa on the beat //

void Wdyyyyyyyyyyyyyyyyyy(){
  int n,q;
  cin >> n >> q;
  vector<int> v(1e5 + 5,0);
  while(n--){
    int x; cin >> x;
    v[x] = 1;
  }

  for(int i = 1;i < 1e5 + 5;i++){
    v[i] += v[i-1];
  }

  while(q--){
    int x; cin >> x;
    cout << v[x - 1] << ' ' << v[1e5 + 4] - v[x] << endl;
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