#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;

int main(){
    ll casosTeste;
    vll vetor;

    while(cin >> casosTeste){
        ll começo, fim, busca;
        bool encontrado = false;
        vetor = {};

        for(int i = 0; i < casosTeste;i++){
            cin >> começo >> fim;

            for(int j = começo; j <= fim;j++){
                vetor.push_back(j);
            }
        }
        sort(vetor.begin(),vetor.end());
        cin >> busca;

        ll a = 0, b = vetor.size() - 1,pos ;
        

        while(a <= b){
            pos = (a+b)/2;
            if(busca == vetor[pos]){
                encontrado = true;
                break;
            }else if(busca < vetor[pos]){
                b = pos - 1;
            }else{
                a = pos + 1;
            }
        }
        if(encontrado){
            ll posInicial = pos, posFinal = pos;

            while(posInicial-1 >= 0 && vetor[posInicial - 1] == busca){
                posInicial--;
            }

            while(posFinal+1 <= vetor.size()-1 && vetor[posFinal + 1] == busca){
                posFinal++;
            }

            cout << busca << " found from " << posInicial << " to " << posFinal << endl;
        }else{
            cout << busca << " not found" << endl;
        }
    }
}