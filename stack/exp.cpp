#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    stack<int> pilha; //Crio uma nova variável stack que armazenará inteiros

    pilha.push(1); //Adiciono um valor na pilha
    pilha.push(2); //Adiciono outro valor na pilha
    pilha.push(3); //Adiciono outro valor na pilha

    cout << pilha.top() << nl; //Imprimo o valor do topo da pilha

    pilha.pop(); //Removo o valor do topo da pilha

    cout << pilha.top() << nl; //Imprimo o valor do topo da pilha

    for(int i = 0; i < 10; i++) pilha.push(i); //Adiciono 10 valores na pilha

    while(!pilha.empty()){ //Enquanto a pilha não estiver vazia
        cout << pilha.top() << " "; //Imprimo o valor do topo da pilha
        pilha.pop(); //Removo o valor do topo da pilha
    }

    cout << nl;

    return 0;
}