#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main() {
  ll tamanho;
  cin >> tamanho;

  for (int i = 0; i < tamanho; i++) {
    ll quantidade, temp, contador = 0;
    cin >> quantidade;
    vll vetorN, vetorO;

    for (int j = 0; j < quantidade; j++) {
      cin >> temp;
      vetorN.push_back(temp);
      vetorO.push_back(temp);
    }

    sort(vetorO.rbegin(), vetorO.rend());

    for (int j = 0; j < quantidade; j++) {
      a if (vetorN[j] == vetorO[j]) { contador++; }
    }

    cout << contador << endl;
  }
}
