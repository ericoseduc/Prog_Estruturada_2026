#include <iostream>
#include <vector>
#include "Alunos.cpp"

#define LIMITE 3

using namespace std;

int main(){
    string nome;
    int d, m, a;
    vector<Aluno> alunos;

    for(int i = 0; i < LIMITE; i++){
        cout << "Digite o nome do aluno: ";
        getline(cin, nome);
        cout<< "Digite a data de nascimento no formato dd mm aaaa: ";
        cin >> d >> m >> a;
        
        alunos.push_back(Aluno(nome, d, m, a));
        cin.ignore();

    }
    
    for(int i =0; i < LIMITE; i++){
        alunos[i].printDados();
        cout << endl;
    }

    return 0;
}