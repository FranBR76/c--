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
        Usuario *head;
        ListaEncadeada() {
            head = NULL;
        }
        
        
        
        
        
        Usuario *criarUsuario() {
            // criacao de um objeto do struct Usuario
            Usuario *usuario = new Usuario();
            cout << "Informe o ID do usuario: " << endl;
            cin >> usuario->id;
            cout << "Informe o nome" << endl;
            cin >> usuario->nome;
            return usuario;
        }

        void inserirUsuarioFinal() {
            // verificar se a lista existe
            if (head == NULL) {
                Usuario *u = criarUsuario();
                head->prox=u;
            }
        }


};



int main() {

}