#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll maior, menor;
  cin >> maior >> menor;

  while (maior > 0 && menor > 0) {
    if (menor > maior) {
      ll temp = menor;
      menor = maior;
      maior = temp;
    }

    ll soma = 0;

    for (ll i = menor; i <= maior; i++) {
      printf("%lld ", i);
      soma += i;
    }

    printf("Sum=%lld\n", soma);

    cin >> maior >> menor;
  }
  return 0;
}
