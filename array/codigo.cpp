// Exercicio: Codigo - Neps Academy - https://neps.academy/br/exercise/47

#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n; // Tamanho da sequencia
    vector <int> v; // Vetor com os valores da sequencia

    cin >> n; // Recebe o tamanho da sequencia

    for(int i = 0; i < n; i++){ // Recebe os valores da sequencia
        int x; // Valor da sequencia
        cin >> x; // Recebe o valor atual da sequencia
        v.push_back(x); // Adiciona o valor na sequencia
    }

    int r = 0; // Quantidade de repetições

    for (int i = 0 ; i < n-2; i++){ // Percorre a sequencia
        if (v[i] == 1 && v[i + 1] == 0 && v[i + 2] == 0){  // Verifica se a sequencia é 1, 0, 0
            r++; // Incrementa a quantidade de repetições
            i += 2; // Pula duas posições
        }
    }

    cout << r << nl; // Imprime a quantidade de repetições

    return 0;
}