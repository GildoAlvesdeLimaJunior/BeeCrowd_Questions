#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<long long> vll;
typedef pair<long long, long long> pll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll qtdNum, casos, numCaso = 1;

    while (cin >> qtdNum >> casos)
    {
        if (qtdNum != 0 && casos != 0)
        {
            vll vetor(qtdNum);
            vll procura(casos);
            vll posicaoProcura(casos, -1);
            ll temp, p = 0;

            for (int i = 0; i < qtdNum + casos; i++)
            {
                if (i < qtdNum)
                {
                    cin >> temp;
                    vetor[i] = temp;
                }
                else
                {
                    cin >> temp;
                    procura[p] = temp;
                    p++;
                }
            }

            sort(vetor.begin(), vetor.end());

            for (int i = 0; i < procura.size(); i++)
            {
                ll procurado = procura[i];
                for (int j = 0; j < vetor.size(); j++)
                {
                    if (procurado == vetor[j])
                    {
                        posicaoProcura[i] = j;
                        break;
                    }
                }
            }

            cout << "CASE# " << numCaso << endl;
            numCaso++;

            for (int i = 0; i < posicaoProcura.size(); i++)
            {
                if (posicaoProcura[i] == -1)
                {
                    cout << procura[i] << " not found" << endl;
                }
                else
                {
                    cout << procura[i] << " found at " << posicaoProcura[i] + 1 << endl;
                }
            }
        }
        else
        {
            break;
        }
    }
}