// Exercicio: O Fantástico Jaspion - Neps Academy: https://neps.academy/br/exercise/283

#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int c;

    cin >> c;

    for(int k = 0; k < c; k++){
        int n, m;

        cin >> n >> m;

        map <string, string> dicionario;

        for(int i = 0; i < n; i++){
            string palavra, traducao;

            cin >> palavra;

            cin.ignore();

            getline(cin, traducao);

            dicionario[palavra] = traducao;
        }

        for(int i = 0; i < m; i++){
            string l;

            getline(cin, l);

            stringstream ss(l);

            string palavra;

            while(ss >> palavra){
                if(dicionario.find(palavra) != dicionario.end()){
                    cout << dicionario[palavra] << " ";
                } else {
                    cout << palavra << " ";
                }
            }

            cout << nl;
        }

        cout << nl;
    }

    return 0;
}