#include <bits/stdc++.h>
#include <iomanip>
#include <ios>

using namespace std;

typedef long long ll;
typedef vector<pair<ll, ll>> vll;

bool comparator(pair<ll, ll> a, pair<ll, ll> b) { return a.second < b.second; }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll casas, cidades = 1;

  while (cin >> casas) {
    if (casas == 0) {
      break;
    }

    ll qPessoas = 0, qLitros = 0;
    double media;

    vll dados(casas);
    for (int i = 0; i < casas; i++) {
      ll temp1, temp2;
      cin >> temp1 >> temp2;
      dados[i].first = temp1;
      dados[i].second = temp2;
      qPessoas += temp1;
      qLitros += temp2;
    }

    media = ((float)qLitros) / qPessoas;

    ll pessoas = 0, consumo = 0;

    for (ll i = 0; i < casas; i++) {
      dados[i].second = dados[i].second / dados[i].first;
    }

    sort(dados.begin(), dados.end(), comparator);

    cout << "Cidades# " << cidades << ":" << "\n";

    for (ll i = 0; i < casas; i++) {
      if (i != casas - 1) {
        if (dados[i].second == dados[i + 1].second) {
          dados[i + 1].first += dados[i].first;
        } else {
          cout << dados[i].first << "-" << dados[i].second << ' ';
        }
      } else {
        cout << dados[i].first << "-" << dados[i].second << '\n';
      }
    }
    cidades++;

    cout << fixed << setprecision(2) << showpoint;
    cout << "Consumo médio: " << media << " m3." << '\n';
  }
}
