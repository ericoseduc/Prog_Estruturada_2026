#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Aluno{
    private:
        string nome;
        float altura = 0.0;
        float peso = 0.0;
        //data de nascimento
        int dia, mes, ano;
    
    public:
        //construtores
        Aluno(){}
        Aluno(string n){
            this->nome = n;
        }
        Aluno(string n, int d, int m, int a);
        
        //getters e setters
        int getIdade();
        void setDataDeNascimento(int d, int m, int a);
        void getDataDeNascimento();
        int calcularIdade(int d, int m, int a);
        void printDados();
        void setPeso(float peso);
        float getPeso();
        void setAltura(float altura);
        float getAltura();
        string getNome();
        void setNome(string nome);
};

Aluno::Aluno(string n, int d, int m, int a){
    this->nome = n;
    this->dia = d;
    this->mes = m;
    this->ano = a;
}

int Aluno::getIdade(){
    return this->calcularIdade(this->dia, this->mes, this->ano);
}

void Aluno::setDataDeNascimento(int d, int m, int a){
    this->dia = d;
    this->mes = m;
    this->ano = a;
}

void Aluno::getDataDeNascimento(){
    cout << this->dia << " / " << this->mes << " / " << this->ano << endl;
}
int Aluno::calcularIdade(int d, int m, int a){
    time_t now = time(0);
    tm* data = localtime(&now);
    int anoAtual = data->tm_year + 1900;
    int mes = data->tm_mon + 1;
    int dia = data->tm_mday;

    int i = anoAtual - a;
    if(mes < m){
        i--;
    }
    if(m == mes && d < dia){
        i--;
    }
    
    return i;
}
void Aluno::setPeso(float peso){
    this->peso = peso;
}
float Aluno::getPeso(){
    return this->peso;
}
void Aluno::setAltura(float altura){
    this->altura = altura;
}
float Aluno::getAltura(){
    return this->altura;
}
string Aluno::getNome(){
    return this->nome;
}

void Aluno::setNome(string nome){
    this->nome = nome;
}

void Aluno::printDados(){
    cout << "Olá!" << endl << "Meu nome é: " << this->getNome() << endl 
         << "Data de Nascimento: ";
    this->getDataDeNascimento();
    cout << "Idade: " << this->getIdade() << endl
         << "Peso: " << this->getPeso() <<" Kg" << endl
         << "Altura: " << this->getAltura() << " m" << endl;
}