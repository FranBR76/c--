#include <iostream>
#include <string>
using namespace std;

struct Produto 
{
    string nome;
    int cod;
    string descricao;
    int qtde;
    float preco;
    bool deletado;

}produtos[5];

void inicializacao() {
    for (int i = 0; i < 5; i++)
    {
        produtos[i].nome = "";
        produtos[i].cod = 0;
        produtos[i].descricao = "";
        produtos[i].qtde = 0;
        produtos[i].preco = 0.0;
        produtos[i].deletado = true;

    }
    
}


// Fazendo o CRUD - Create, Read, Update e Delete
void cadastrarProduto() {
    int indice = 0;
    cout << "Cadastrando um novo produto" << endl << endl;
    cout << "Informe o indice para salvar " << endl;
    cin >> indice;
    cout << "Informe nome: " << endl;
    cin >> produtos[indice].nome;
    cout << "Informe quantidade:" << endl;
    cin >> produtos[indice].qtde;
    cout << "Informe descrição: " << endl;
    cin >> produtos[indice].descricao;
    produtos[indice].deletado = false;
    
}

void listarProduto() {
    int indice = 0;
    cout << "Informe o indice para listar " << endl;
    cin >> indice;
    cout << "- Nome: " << produtos[indice].nome << endl;
    cout << "- Qtde: " << produtos[indice].qtde << endl;
    cout << "- Descricao: " << produtos[indice].descricao << endl;
    

}

void editarProduto() {
    
    //testar se já está cadastrado -- pode usar o  produtos[indice].deletado = true;
    int indice = 0;
    cout << "Informe o indice para editar " << endl;
    cin >> indice;
    if (produtos[indice].nome == "" &&
        produtos[indice].cod == 0 &&
        produtos[indice].descricao == "" &&
        produtos[indice].preco == 0.0 &&
        produtos[indice].qtde == 0 ){
            cout << "Produto Não Cadastrado";
    }

    else {
      
        cout << "Editando um produto" <<endl << endl;
        
        // fazer menu para o atributo que o usuario quer mudar;
        int opcao = 0;
        do {
            cout << "O que você quer editar? - 0 para Sair " << endl << endl;
            
            cout << "1 - Nome" << endl;
            cout << "2 - Quantidade"<< endl;
            cout << "3 - Descrição" << endl;
            cout << "4 - Preço" << endl;
            
            cin >> opcao;
            
            switch (opcao)
            {
                case 1:
                    cout << "Informe nome: " << endl;
                    cin >> produtos[indice].nome;
                    break;
                case 2:
                    cout << "Informe quantidade:" << endl;
                    cin >> produtos[indice].qtde;
                    break;
                case 3:
                    cout << "Informe descrição: " << endl;
                    cin >> produtos[indice].descricao;
                    break;
                case 4:
                    cout << "Informe preço: " << endl;
                    cin >> produtos[indice].preco;
                    break;
                case 0:
                    cout << "Salvando . . . " << endl << endl;
                    break;

                default:
                    cout << "Opção inválida";
                    break;
            }

        }
        
        while (opcao != 0);
            
        
       
    }

}

void deletrarProduto() {
        
}


int main() {
    inicializacao();
    cadastrarProduto();
    listarProduto();
    editarProduto();
    listarProduto();


}