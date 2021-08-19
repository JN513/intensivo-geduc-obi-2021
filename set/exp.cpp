#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    set<int> S; //Cria uma variável do tipo set para armazenar números inteiros

    S.insert(10); //Adiciona o elemento 10 no set
    S.insert(3); //Adiciona o elemento 3 no set

    if(S.find(3) != S.end()){ //Se 3 está no conjunto
        cout << 3 << nl;
    }

    S.insert(10); //Adiciona o elemento 10 no set

    for (set<int>::iterator it=S.begin(); it!=S.end(); ++it){
        cout << *it << " ";
    }

    S.erase(10); //Apaga o elemento 10 do set

    for (set<int>::iterator it=S.begin(); it!=S.end(); ++it){
        cout << *it << " ";
    }
    cout << nl;

    return 0;
}