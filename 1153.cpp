#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

ll fatorial(ll quantidade) {
  if (quantidade == 1 || quantidade == 0) {
    return 1;
  }
  return quantidade * fatorial(quantidade - 1);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll quantidade;
  cin >> quantidade;

  printf("%lld\n", fatorial(quantidade));
}
