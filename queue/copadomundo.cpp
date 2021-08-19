// // Exercicio: Copa do Mundo - Neps Academy: https://neps.academy/br/exercise/276

#include <bits/stdc++.h>

#define ll long long int
#define nl endl // macro para o endl

using namespace std; // Use std::

int main(void){
    queue <char> fila; // fila de char com os times

    for(char i = 'A'; i <= 'P'; i++) fila.push(i); // insere os times na fila

    for(int i = 0, a, b; i < 15; i++){ // 15 rodadas
        cin >> a >> b; // le a pontuação de cada time

        char p1 = fila.front(); // primeiro time da fila
        fila.pop(); // remove o primeiro time da fila
        char p2 = fila.front(); // segundo time da fila
        fila.pop(); // remove o segundo time da fila

        if(a > b) fila.push(p1); // se o primeiro time ganhou, coloca o primeiro time na fila
        else if( b > a) fila.push(p2); // se o segundo time ganhou, coloca o segundo time na fila
    }

    cout << fila.front() << nl; // imprime o vencedor

    return 0;
}