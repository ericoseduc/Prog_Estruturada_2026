#include <iostream>
#include "Alunos.cpp"

#define LIMITE 3

using namespace std;

int main(){
    string nome;
    int d, m, a;
    Aluno alunos[] = {};

    for(int i = 0; i < LIMITE; i++){
        cout << "Digite o nome do aluno: ";
        getline(cin, nome);
        cout<< "Digite a data de nascimento no formato dd mm aaaa: ";
        cin >> d >> m >> a;

        alunos[i] = Aluno(nome );
        alunos[i].setDataDeNascimento(d, m, a);
        
        cin.clear();
    }
    
    for(int i =0; i < LIMITE; i++){
        alunos[i].printDados();
        cout << endl;
    }

    return 0;
}