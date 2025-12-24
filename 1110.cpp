#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef queue<ll> qll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll quantidade, temp;

    while (cin >> quantidade)
    {
        if (quantidade == 0)
        {
            break;
        }
        else
        {
            qll cartas;
            vll descartes;

            for (int i = 1; i <= quantidade; i++)
            { // Aloca cartas
                cartas.push(i);
            }

            while (cartas.size() > 1)
            {

                temp = cartas.front();
                descartes.push_back(temp);

                cartas.pop();
                temp = cartas.front();
                cartas.push(temp);
                cartas.pop();
            }

            cout << "Discarded cards: ";
            for (int i = 0; i < quantidade - 1; i++)
            {
                if(i < quantidade-2){
                    cout << descartes[i] << ", ";
                }else{
                    cout << descartes[i];
                }
            }
            cout << '\n' << "Remaining card: " << cartas.front() << '\n';
        }
    }
}