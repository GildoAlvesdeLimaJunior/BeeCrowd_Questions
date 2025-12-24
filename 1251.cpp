#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef map<ll, ll> mll;

bool cpm(pair<ll, ll> &a, pair<ll, ll> &b) {
  if (a.second == b.second) {
    return a.first < b.first;
  }
  return a.second < b.second;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;

  while (getline(cin, s)) {
    mll resultados;
    vector<pair<ll, ll>> p;

    for (int i = 0; i < s.size(); i++) {
      resultados[s[i]]++;
    }

    for (auto const &x : resultados) {
      p.push_back(x);
    }

    sort(p.begin(), p.end(), cpm);

    for (auto &x : p) {
      cout << x.first << ':' << x.second << endl;
    }

    cout << endl;
  }
}
