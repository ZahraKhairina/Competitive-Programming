#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for (ll i = 0; i < n; i++) cin >> a[i];
  for (ll i = 0; i < n - 1; i++){
    ll s, t;
    cin >> s >> t;
    if(s > a[i]) continue;
    else{
      ll x = a[i];
      a[i] %= s;
      a[i+1] += (x/s)*t;
    }
  }

  cout << a[n-1] << endl;
}
