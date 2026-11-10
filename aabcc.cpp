#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  ll limit = sqrt(n/12);

  vector<ll> prima;

  bool p[limit + 1];
  memset(p, true, sizeof(p));
  p[0] = false;
  p[1] = false;

  for (ll i = 2; i*i <= limit; i++ ){
    if(p[i] == true){
      for (ll j = i*i; j <= limit; j+= i){
        p[j] = false;
      }
    }
  }

  for (ll i = 2; i <= limit; i++){
    if (p[i] == true) prima.push_back(i); 
  }

  ll ans = 0;

  for (ll i = 0; i < prima.size(); i++){
    for (ll j = i+1; j < prima.size(); j++){
      for (ll k = j+1; k < prima.size(); k++){
        ll a = prima[i];
        ll b = prima[j];
        ll c = prima[k];

        if (prima[k] > sqrt(n/(a*a*b))) break;
        else{
          ll hitung = a*a*b*c*c;
          if (hitung > n) break;
          else ans++;
        }
      }
    }
  }

  cout << ans << endl;
}
