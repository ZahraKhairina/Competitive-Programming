#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++){
    cin >> a[i];
  }

  bool vis[100001] = {};
  for(ll i = 0; i < n; i++){
    ll x = a[i];

    for (ll j = 2; j*j <= x; j++){
      while(x %  j == 0){
        vis[j] = true;
        x /= j;
      }

    }
    if (x > 1) vis[x] = true;
  }

  vector<bool> gakboleh(m+1, false);
  for (ll p = 2; p <= 100000; p++){
    if (vis[p] == true){
      for (ll j = p; j <= m; j += p){
        gakboleh[j] = true;
      }
    }
  }

  vector<ll> ans;

  for (ll i = 1; i <= m; i++){
    if (gakboleh[i] == false) ans.push_back(i);
  }

  cout << ans.size() << endl;
  for (auto z : ans) cout << z << endl;
}
