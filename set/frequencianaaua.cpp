// Exercicio: Frequência na Aula - Neps Academy - https://neps.academy/br/exercise/252

#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n; // Numero de entradas
    set<int> alu; // set de alunos

    cin >> n; // Leio o numero de entradas

    for(int i = 0, a; i < n; i++){ // Leio N vezes
        cin >> a; // Leio a entrada
        alu.insert(a); // Insere a entrada no set
    }

    cout << alu.size() << nl; // Imprimo o tamanho do set

    return 0;
}