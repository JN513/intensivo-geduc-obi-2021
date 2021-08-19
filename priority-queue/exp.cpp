
#include <bits/stdc++.h>
#include <queue>

#define ll long long int
#define nl endl

using namespace std;

int main(void){

    priotiy_queue <pair<int, int>> pq; // Crio a fila de prioriade PQ

    pq.push(1); // Adiciono elementos na fila
    pq.push(2); // Adiciono elementos na fila
    pq.push(3); // Adiciono elementos na fila

    cout << pq.top() << nl; // Imprimo o elemento com maior prioridade

    pq.pop(); // Removo o elemento com maior prioridade

    cout << pq.top() << nl; // Imprimo o elemento com maior prioridade

    while(!pq.empty()){ // Enquanto a fila não estiver vazia
        cout << pq.top() << nl; // Imprimo o elemento com maior prioridade
        pq.pop(); // Removo o elemento com maior prioridade
    }

    pq.push(-1); // Adiciono elementos na fila
    pq.push(-2); // Adiciono elementos na fila
    pq.push(-3); // Adiciono elementos na fila

    cout << pq.top() << nl;

    pq.pop();

    cout << pq.top() << nl;

    while(!pq.empty()){
        cout << pq.top() << nl;
        pq.pop();
    }

    return 0;
}

