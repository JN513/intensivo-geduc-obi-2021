#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    map<string, int> M; //Cria uma variável do tipo map que mapeia strings em int

    M.insert(make_pair("Alana", 10)); //Inserimos uma variável do tipo pair diretamente no map
    M["Alana"] = 10; //Relacionando o valor 10 à chave "Alana"

    if(M.find("Alana") != M.end()){ //Se a chave "Alana" foi inserida no map
      cout<<"Sim"<< nl;
    }else{
      cout<<"Nao"<< nl;
    }

    cout<<M["Alana"]<< nl; //Imprime o valor correspondente a chave "Alana", no cas, o valor 10.

    M["Joao"] = 1; //Relacionando o valor 1 à chave "Joao"
    M["Rodrigo"] = 9; //Relacionando o valor 10 à chave "Rodrigo"

    for (map<string,int>::iterator it=M.begin(); it!=M.end(); ++it){
        cout<< "("<< it->first<< ", "<< it->second<< ") ";
    }

    M.erase("Alana"); //Apaga o elemento que possui a chave "Alana" do map

    for (map<string,int>::iterator it=M.begin(); it!=M.end(); ++it){
        cout<< "("<< it->first<< ", "<< it->second<< ") ";
    }

    return 0;
}