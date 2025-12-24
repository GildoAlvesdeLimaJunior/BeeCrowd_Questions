#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll quantidade;
    cin >> quantidade;

    vll numeros(quantidade);
    vll impar,par;

    for(int i = 0; i < quantidade; i++){
        cin >> numeros[i];

        if(numeros[i]%2 == 0){
            par.push_back(numeros[i]);
        }else{
            impar.push_back(numeros[i]);
        }
    }

    sort(par.begin(),par.end());
    sort(impar.rbegin(),impar.rend());

    for(int i = 0; i < quantidade; i++){
        if(i < par.size()){
            cout << par[i] << '\n';
        }else{
            cout << impar[i-par.size()] << '\n';
        }
    }
}