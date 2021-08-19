#include <bits/stdc++.h>

#define nl endl

using namespace std;

int main(void){
    vector<int> V; // Criação do vector

    V.push_back(10); //Adiciono o elemento 10 no final do vector V
	V.push_back(7); //Adiciono o elemento 7 no final do vector V
	V.push_back(21); //Adiciono o elemento 21 no final do vector V
/*
    for(int i = 0; i < V.size(); i++){ //Passo por cada elemento do vector V
		cout<< V[i] << nl; //Imprimir cada elemento do vector V
	}
*/
    V.resize(10); //Muda o tamanho do vector V para 10.
/*
    for(int i = 0; i < V.size(); i++){ //Passo por cada elemento do vector V
		cout<< V[i] << nl; //Imprimir cada elemento do vector V
	}
*/
    V.pop_back(); //Apaga o ultimo elemento do vector V.

    for(int i = 0; i < V.size(); i++){ //Passo por cada elemento do vector V
		cout<< V[i] << nl; //Imprimir cada elemento do vector V
	}

    V.clear(); //Remove todos os elementos do vector V.

    cout << "Vetor apagado\n";

    for(int i = 0; i < V.size(); i++){ //Passo por cada elemento do vector V
		cout<< V[i] << nl; //Imprimir cada elemento do vector V
	}

    vector <vector<int>> v;

    vector <int> temp;

    for(int i = 0; i < 5; i++) temp.push_back(i);

    v.push_back(temp);

    return 0;
}