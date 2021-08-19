#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    queue<int> fila;
	
    //fila.push(1);
    //fila.push(2);

    //cout << fila.front() << nl;

    //fila.pop();

    //cout << fila.front() << nl;

    for(int i = 10; i <= 100; i += 10){
        fila.push(i);
    }

	//Após o caixa quebrar queremos saber as pessoas que ainda estão na fila.
	while(fila.empty() == false){ //Enquanto a fila não for vazia
		int p = fila.front(); //Pego a pessoa na frente da fila e imprimo
		cout << p <<" ";

		fila.pop(); //Removo a pessoa que está na frente da fila.
	}
    return 0;
}