#include <iostream>
#include <string>
using namespace std;

struct Usuario {
    // primeira parte = DATA
    int id;
    string nome;
    string login;
    string email;
    // segunda parte = NEXT
    Usuario *prox;
    
} ;



class ListaEncadeada {
    public:
    // construtor
    Usuario *head;
    ListaEncadeada() {
        head = NULL;
    }
        
        
        // Usuario *criarUsuario() {
            
        
        void inserirUsuarioFinal() {
            // criacao de um objeto do struct Usuario
            Usuario *usuario = new Usuario();
            cout << "Informe o ID do usuario: " << endl;
            cin >> usuario->id;
            cout << "Informe o nome" << endl;
            cin >> usuario->nome;
            
            
            // verificar se a  lista existe
            if (!head) {
                // Usuario *u = criarUsuario();
                head = usuario;
            }

            Usuario *temp = NULL;
            temp = head;
            while (temp -> prox) {
                temp = temp->prox;
                // quando acabar o while, o ponteiro temp terá chegado ao ultimo nodo existente até entao na lista

            }
            // fora do while teremos acesso ao ponteiro do ultimo nodo da lista
            temp->prox = usuario;

        }

        void exibirUsuarios() {
            Usuario *temp = head; 
            while(temp) {
                cout << "ID: " << temp->id << endl;
                cout << "Nome: " << temp->nome << endl;
                temp = temp->prox;
                
            }
        }

};



int main() {

    ListaEncadeada lista;
    for (int i = 0; i < 2; i++)
    {
        lista.inserirUsuarioFinal();
    }
    lista.exibirUsuarios();

}