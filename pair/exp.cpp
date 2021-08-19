#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    // pair simples
/*
    pair<string, int> P; //Cria uma variável pair

	cin>>P.first>>P.second; //Lê um valor do tipo string e armazena na primeira posição do pair e um valor do tipo int para a segunda posição.

	cout << P.first << " " << P.second << nl; //Imprime o valor armazenado na primeira posição do pair e o valor armazenado na segunda posição do pair.

	pair <int, int> x;

	cin >> x.first >> x.second;

	cout << x.first << " " << x.second << nl;

    // pair de pair

    pair<string, pair<double, double>> P2; //Cria uma variável pair

	P2.first = "Joao"; //Nome de um aluno
	P2.second.first = 8.2; //Primeira nota do aluno
	P2.second.second = 10; //Segunda nota do aluno

    // Pares de exemplo

    pair<int, string> A;
	pair<int, string> B;

	A.first = 10;
	A.second = "Joao";

	B.first = 5;
	B.second = "Ana";

	if(A > B){
		cout<<A.second<<" eh melhor\n";
	}else{
		cout<<B.second<<" eh melhor\n";
	}

    // Pair em um Vector
*/
    vector< pair<int, string> > V;
	pair<int, string> tmp;
	
	for(int i=1;i<10;i++){	
		cin>>tmp.first>>tmp.second; //Leio os valores da entrada e armazeno em um pair temporário
		V.push_back(tmp); //Adiciono o pair no vetor
	}

	for(int i=0;i<V.size();i++){
		cout<<V[i].first<<" "<<V[i].second<<endl; //Imprimo os valores do vetor
	}

    return 0;
}