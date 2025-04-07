#include <iostream>
#include <string>
using namespace std;

struct cliente {
    string nome;
    int idade;
    string cpf;
    string rg;
    string estadoCivil;
    string endereco;
}clientes[5];

void inicializacao() {
    for (int i = 0; i < 5; i++) {
        clientes[i].nome = "";
        clientes[i].idade = 0;
        clientes[i].cpf = "";
        clientes[i].rg = "";
        clientes[i].estadoCivil = "";
        clientes[i].endereco = "";
    }
}

void cadastrarCliente() {
    int id;
    cout << "Informe o indice do cliente: " << endl;
    cin >> id;
    cout << "Informe nome: " << endl;
    cin >> clientes[id].nome;

    cout << "Informe Estado Civil: " << endl;
    cin >> clientes[id].estadoCivil;
}

void listarCliente() {
    int id;
    cout << "Informe indice: " << endl;
    cin >> id;

    cout << "Nome: " << clientes[id].nome << endl;
    cout << "Estado Civil: " << clientes[id].estadoCivil << endl;
}

void editarCliente() {
    int id;
    cout << "Informe o indice do cliente: " << endl;
    cin >> id;
    cout << "O que você quer editar? - 0 para Sair " << endl << endl;

    cout << "1 - Nome" << endl;
    cout << "2 - Idade" << endl;
    cout << "3 - CPF" << endl;
    cout << "4 - RG" << endl;
    cout << "5 - Estado Civil" << endl;
    cout << "6 - Endereço" << endl;

    int opcao = 0;
    do {
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Informe nome: " << endl;
                cin >> clientes[id].nome;
                break;
            case 2:
                cout << "Informe idade: " << endl;
                cin >> clientes[id].idade;
                break;
            case 3:
                cout << "Informe CPF: " << endl;
                cin >> clientes[id].cpf;
                break;
            case 4:
                cout << "Informe RG: " << endl;
                cin >> clientes[id].rg;
                break;
            case 5:
                cout << "Informe estado civil: " << endl;
                cin >> clientes[id].estadoCivil;
                break;
            case 6:
                cout << "Informe endereço: " << endl;
                cin >> clientes[id].endereco;
                break;
            case 0:
                cout << "Salvando . . . " << endl << endl;
                break;
            default:
                cout << "Opção inválida" << endl;
                break;
        }
    } while (opcao != 0);
}

void deletarCliente() {
    int id;
    cout << "Informe o indice do cliente: " << endl;
    cin >> id;
    clientes[id].nome = "";
    clientes[id].idade = 0;
    clientes[id].cpf = "";
    clientes[id].rg = "";
    clientes[id].estadoCivil = "";
    clientes[id].endereco = "";
}

int main() {
    inicializacao();
    

    return 0;
}