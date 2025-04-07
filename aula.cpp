#include <iostream>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    string cpf;
    string rg;
    int ra;
    string estadoCivil;
    string endereco;

}pessoas[5];

void inicializacao(){
    for (int i=0; i<5; i++){
        pessoas[i].nome = "";
        pessoas[i].idade = 0;
        pessoas[i].cpf = "";
        pessoas[i].rg = "";
        pessoas[i].ra = 0;
        pessoas[i].estadoCivil = "";
        pessoas[i].endereco = "";
        
    }
}

void cadastrarPessoa(){
    int id;
    cout << "Informe o indice do cliente: "<< endl;
    cin >> id;
    cout << "Informe nome: " << endl;
    cin >> pessoas[id].nome;
    
    cout << "Informe Estado Civil: " << endl;
    cin >> pessoas[id].estadoCivil;

}
void listarPessoa(){
    int id;
    cout << "Informe indice: "<< endl;
    cin >> id;
    
    cout << "Nome: "<< pessoas[id].nome << endl;
    cout << "Estado Civil: "<< pessoas[id].estadoCivil << endl;

}

int main(){
    inicializacao();
    cadastrarPessoa();
    listarPessoa();
    
    
}
