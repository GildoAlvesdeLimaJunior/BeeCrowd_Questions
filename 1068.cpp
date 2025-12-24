#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string teste;

    while(cin >> teste){
        ll quantidadeParenteses = 0;

        for(int i = 0; i < teste.size(); i++){
            if(teste[i] == '('){
                quantidadeParenteses++;
            }
            if(teste[i] == ')'){
                if(quantidadeParenteses == 0){
                    cout << "incorrect" << '\n';
                    break;
                }
                quantidadeParenteses--;
            }
        }

        if(quantidadeParenteses == 0){
            cout << "correct" << '\n';
        }else{
            cout << "incorrect" << '\n';
        }
    }
}