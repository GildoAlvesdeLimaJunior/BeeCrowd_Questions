#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef priority_queue<ll> pqll;
typedef queue<ll> qll;
typedef stack<ll> sll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll quantidade;
    cin >> quantidade;

    while(cin >> quantidade){
        ll operador, atual;

        qll queue;
        sll stack;
        pqll pqueue;
        bool isQueue = true, isStack = true, isPQueue = true;
        
        for(int i = 0; i < quantidade; i++){
            cin >> operador >> atual;

            if(operador == 1){
                queue.push(atual);
                stack.push(atual);
                pqueue.push(atual);
            }else{
                if(isStack){
                    if(stack.empty() || stack.top() != atual){
                        isStack = false;
                    }else{
                        stack.pop();
                    }
                }

                if(isQueue){
                    if(queue.empty() || queue.front() != atual){
                        isQueue = false;
                    }else{
                        queue.pop();
                    }
                }

                if(isPQueue){
                    if(pqueue.empty() || pqueue.top() != atual){
                        isPQueue = false;
                    }else{
                        pqueue.pop();
                    }
                }
            }
        }

        ll verificador = 0;

        if(isStack){
            verificador++;
        }
        if(isQueue){
            verificador++;
        }
        if(isPQueue){
            verificador++;
        }

        if(verificador == 0){
            cout << "impossible" << '\n';
        }else if(verificador == 1){
            if(isStack){
                cout << "stack" << '\n';
            }else if(isQueue){
                cout << "queue" << '\n';
            }else if(isPQueue){
                cout << "priority queue" << '\n';
            }
        }else{
            cout << "not sure" << '\n';
        }
    }
}