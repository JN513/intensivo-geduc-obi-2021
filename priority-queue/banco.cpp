// Exercicio: Banco - Neps Academy - https://neps.academy/br/exercise/273

#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int c, n, r;

priority_queue <pair <int, int> , vector<pair<int,int>>, greater< pair<int,int> > > fila;


int main(void){
    cin >> c >> n;

    for(int i = 0; i < c; i++){ 
        fila.push(make_pair(0, i));
    }

    for(int i = 0; i < n; i++){
        int a, b;

        cin >> a >> b;

        int m = fila.top().first;
        int id = fila.top().second;

        fila.pop();

        if(m - a > 20) r++;

        fila.push(make_pair(max(m, a)+b, id));
    }

    cout << r << endl;

    return 0;
}