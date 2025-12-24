#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef map<string, ll> mll;
typedef set<string> ss;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string nome, trash;
    ll casosTeste;

    cin >> casosTeste;
    getline(cin,nome);
    getline(cin,nome);

    for (int i = 0; i < casosTeste; i++)
    {
        ss ordem;
        mll quantidades;
        double soma = 0;

        while (getline(cin,nome) && !nome.empty())
        {
                ordem.insert(nome);
                quantidades[nome]++;
                soma++;
        }

        cout << fixed << setprecision(4);
        for(auto x : ordem){
            cout << x << " " << 100*(quantidades[x]/soma) << '\n';
        }

        if(i != casosTeste-1){
            cout << '\n';
        }
    }
}