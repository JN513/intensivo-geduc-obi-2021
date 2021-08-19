// Exercicio: Zero para cancelar - OBI 2021 Primeira fase - https://neps.academy/br/exercise/1486

#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;
    stack <int> pilha;

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;

        cin >> x;

        if(x == 0){
            pilha.pop();
        }else{
            pilha.push(x);
        }
    }

    int r = 0;

    while(!pilha.empty()){
        r += pilha.top();
        pilha.pop();
    }

    cout << r << nl;

    return 0;
}