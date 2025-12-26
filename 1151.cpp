#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll primeiro = 0, segundo = 1, terceiro;
  ll final;
  cin >> final;

  for (int i = 0; i < final; i++) {
    if (i == 0) {
      cout << primeiro << " ";
    } else if (i == 1) {
      cout << segundo << " ";
    } else if (i != final - 1) {
      terceiro = segundo + primeiro;
      primeiro = segundo;
      segundo = terceiro;
      cout << terceiro << " ";
    } else {
      terceiro = segundo + primeiro;
      primeiro = segundo;
      segundo = terceiro;
      cout << terceiro << '\n';
    }
  }
}
