#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool comp(pair<ll, ll> a, pair<ll,ll> b){
  return a.first < b.first;
}

int main() {
  ll n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> c;

  for (ll i = 0; i < n; i++){
    ll a;
    cin >> a;
    c.push_back({a,0});
  }

  for (ll i = 0; i < m; i++){
    ll b;
    cin >> b;
    c.push_back({b,1});
  }

  sort(c.begin(), c.end(), comp);

  for (ll i = 0; i <(n+m); i++){
    if(c[i].second == 0) cout << i+1 << " ";
  }
  cout << endl;
  for (ll i = 0; i <(n+m); i++){
    if (c[i].second == 1) cout << i + 1 << " ";
  }
}
