#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<long long> vll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll quantidade;
    string lixo;
    cin >> quantidade;
    getline(cin,lixo);

    for(int i = 0; i < quantidade;i++){
        string s;
        getline(cin,s);

        int quantidadeAbertos = 0;
        int diamantes = 0;
        
        for(int j = 0; j < s.size();j++){
            if(s[j] == '<'){
                quantidadeAbertos++;
            }
            if(s[j] == '>'){
                if(quantidadeAbertos > 0){
                    quantidadeAbertos--;
                    diamantes++;
                }
            }
        }

        cout << diamantes << endl;
    }
}