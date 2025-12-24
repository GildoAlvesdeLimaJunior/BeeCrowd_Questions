#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;

int main(){
    ll casosTeste;

    while(cin >> casosTeste){
        ll começo, fim, busca;
        bool encontrado = false;
        vll vetor(casosTeste*2);

        for(int i = 0; i < casosTeste*2;i+=2){
            cin >> vetor[i] >> vetor[i+1];
            
        }
        
        cin >> busca;
        ll quantidadeBusca = -1,inicioBusca = 0;


        for(int i = 0; i < casosTeste*2;i+=2){
            if(vetor[i] <= busca && vetor[i+1] >= busca){
                quantidadeBusca++;
                inicioBusca += busca-vetor[i];
            }
            if(vetor[i] < busca && vetor[i+1] < busca){
                inicioBusca += vetor[i+1] - vetor[i] + 1;
            }
        }

        if(quantidadeBusca == -1){
            cout << busca << " not Found" << endl;
        }else{
            cout << busca << " found from "<< inicioBusca << " to " << quantidadeBusca + inicioBusca << endl;
        }
    }
}