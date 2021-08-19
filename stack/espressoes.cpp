#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std; // 

int n; // Numero de espressões

bool verifica_expressao(string x){ // Verifica se a expressão é válida
    stack <char> pilha; // Pilha de caracteres

    for(int i = 0; i < x.size(); i++){ // Percorre a expressão
        if(x[i] == '(') pilha.push('('); // Se for abre parenteses, empilha
        else if(x[i] == '[') pilha.push('['); // Se for abre colchetes, empilha
        else if(x[i] == '{') pilha.push('{'); // Se for abre chaves, empilha
        else if (x[i] == ')'){ // Se for fecha parenteses
            if(pilha.empty()) return false; // Se a pilha estiver vazia, a expressão não é válida

            char top = pilha.top(); // Pega o topo da pilha

            if(top != '(') return false; // Se o topo não for abre parenteses, a expressão não é válida
            else pilha.pop(); // Se for abre parenteses, desempilha
        }
        else if (x[i] == ']'){ // Se for fecha colchetes
            if(pilha.empty()) return false; // Se a pilha estiver vazia, a expressão não é válida

            char top = pilha.top(); // Pega o topo da pilha

            if(top != '[') return false; // Se o topo não for abre colchetes, a expressão não é válida
            else pilha.pop(); // Se for abre colchetes, desempilha
        }
        else if (x[i] == '}'){ // Se for fecha chaves
            if(pilha.empty()) return false; // Se a pilha estiver vazia, a expressão não é válida

            char top = pilha.top(); // Pega o topo da pilha

            if(top != '{') return false; // Se o topo não for abre chaves, a expressão não é válida
            else pilha.pop(); // Se for abre chaves, desempilha
        }
    }

    if(!pilha.empty()) return false; // Se a pilha não estiver vazia, a expressão não é válida

    return true; // Se chegou até aqui, a expressão é válida
}

int main(void){ // Inicio do programa
    cin >> n; // Lê Numero de espressões

    for(int i = 0; i < n; i++){ // Lê as espressões
        string s; 
        cin >> s; // Lê a expressão
        if(verifica_expressao(s)) { // Se a expressão for válida
            cout << "S" << nl; // Imprime S
        } else { // Se a expressão não for válida
            cout << "N" << nl; // Imprime N
        }
    }

    return 0;
}