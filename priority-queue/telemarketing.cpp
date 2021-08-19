// Exercicio: Telemarketing - Neps Academy - https://neps.academy/br/exercise/265

#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, l; // Numero de vendedores, numero de ligações

int ven[1002]; // Vendedores

priority_queue < pair <int,int> > fila; // Fila de prioridade

int main(void){
    cin >> n >> l; // Numero de vendedores, numero de ligações

    for(int i = 0; i < n; i++) fila.push({0,-i}); // Inserindo os vendedores na fila de prioridade com prioridade 0

    for(int i = 0; i < l; i++){ // Para cada ligação
        int a; // Duração da ligação

        cin >> a; // Leio a Duração da ligação

        int m = fila.top().first; // Vendedor com maior prioridade
        int x = fila.top().second; // Id do vendedor com maior prioridade

        fila.pop(); // Removo o vendedor com maior prioridade

        ven[-x]++; // Incremento o numero de ligações do vendedor

        fila.push({-1*(-m+a), x}); // Inserindo o vendedor na fila de prioridade com prioridade -1*(m+a)
    }

    for(int i = 0; i < n; i++) cout << i+1 << " " << ven[i] << nl; // Imprimindo o numero de ligações de cada vendedor

    return 0;
}