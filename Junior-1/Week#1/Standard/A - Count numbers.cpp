#include <bits/stdc++.h>
using namespace std;

template < typename T1 = int, typename T2 = int > ostream& operator << (ostream &out, const pair <T1, T2> &p) {
  out << p.first << ' ' << p.second;
  return out;
}
template < typename T = int > istream& operator >> (istream &in, vector < T > &v) { 
  for (auto &x: v) in >> x;
  return in;
}
template < typename T = int > istream& operator >> (istream &in, vector < vector < T > > &v) { 
  for (auto &x: v) for(auto &y : x) in >> y;
  return in;
}
template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) {
  for (const T &x: v) out << x << ' ';
  return out;
}
template < typename T = int > ostream& operator << (ostream &out, const set < T > &v) {
  for (const T &x: v) out << x << ' ';
  return out;
}
template < typename T1 = int, typename T2 = int > ostream& operator << (ostream &out, const map < T1, T2 > &v) {
  for (const auto &[x, y]: v) out << x << ' ' << y << endl; 
  return out;
}

#define Kill ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define endl '\n'
#define msb(x) 64 - ll(__builtin_clzll(x))
#define yes cout << "YES";
#define no cout << "NO";

const int dx[]{0, 0, 1, -1, -1, 1, -1, 1}, dy[]{1, -1, 0, 0, -1, 1, 1, -1};
const ll MOD = 1e9+7;
const int N = 1e6 + 5;
const int inf = 1e9;
const ll INF = 1e18;

// Ebraaaaaaaaaaaaaaaaaa on the beat //

void Wdyyyyyyyyyyyyyyyyyy(){ // The Solution is here
  int n, q; cin >> n >> q;
  int a[n + 1]{0};
  while(q--){
    int z, x; cin >> z >> x;
    if(z == 1) a[x]++;
    else cout << a[x] << endl;
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
