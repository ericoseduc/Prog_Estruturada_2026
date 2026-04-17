#include <iostream>
#include <vector>
#include "Alunos.cpp"

#define LIMITE 1

using namespace std;

int main(){
    string nome;
    int d, m, a;
    float p, h;
    vector<Aluno> alunos;
    Aluno aluno;

    for(int i = 0; i < LIMITE; i++){
        cout << "Digite o nome do aluno: ";
        getline(cin, nome);
        cout<< "Digite a data de nascimento no formato dd mm aaaa: ";
        cin >> d >> m >> a;
        cout << "Digite o peso do aluno no formato kg.g: ";
        cin >> p;
        cout << "Digite a altura do aluno no formato m.cm: ";
        cin >> h;
        aluno.setNome(nome);
        aluno.setDataDeNascimento(d,m,a);
        aluno.setPeso(p);
        aluno.setAltura(h);
        
        alunos.push_back(aluno);

        cin.ignore();

    }
    
    for(int i =0; i < LIMITE; i++){
        alunos[i].printDados();
        cout << endl;
    }

    return 0;
}