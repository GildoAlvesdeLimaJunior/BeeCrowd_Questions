#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<long long> vll;
typedef pair<long long, long long> pll;

ll buubleSort(vll &vetor){
    ll swaps = 0;

    for(int i = 0; i < vetor.size(); i++){
        for(int j = 0; j < vetor.size() - 1; j++){
            if(vetor[j] > vetor[j+1]){
                swap(vetor[j],vetor[j+1]);
                swaps++;
            }
        }
    }

    return swaps; 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll casosBase;
    cin >> casosBase;

    for(int i = 0; i<casosBase;i++)
    {
    ll tamanho,temp;
     
    cin >> tamanho;
    vll vagoes(tamanho);

    for(int i = 0; i < tamanho; i++)
    {
        cin >> temp;
        vagoes[i] = temp;
    }

    cout << "Optimal train swapping takes "<< buubleSort(vagoes) << " swaps." << '\n';
    }
}