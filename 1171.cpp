#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<long long> vll;
typedef pair<long long,long long> pll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll quantidade,temp,posicao = 0;
    cin >> quantidade;

    vll numeros(quantidade),numerosDiferentes,ocorrencias;

    for(int i = 0; i < quantidade;i++)
    {
        cin >> temp;
        numeros[i] = temp;
    }

    sort(numeros.begin(),numeros.end());

    ll anterior = numeros[0];
    numerosDiferentes.push_back(numeros[0]);
    ocorrencias.push_back(1);

    for(int i = 1; i < numeros.size();i++)
    {
        if(numeros[i] == anterior){
            ocorrencias[posicao]++;
        }else{
            numerosDiferentes.push_back(numeros[i]);
            ocorrencias.push_back(1);
            posicao++;
        }
        anterior = numeros[i];
    }

    for(int i = 0; i < numerosDiferentes.size(); i++){
        cout << numerosDiferentes[i] << " aparece " << ocorrencias[i] << " vez(es)"<<'\n';
    }
}