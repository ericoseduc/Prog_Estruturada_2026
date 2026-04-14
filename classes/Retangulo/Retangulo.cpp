#include <iostream>

using namespace std;

class Retangulo {
    private:
        int base, altura;

    public:
        Retangulo(int b, int h){
            base = b;
            altura = h;
        }
        int getBase();
        int getAltura();
        void printDados();
};

int Retangulo::getAltura(){
    return altura;
}

int Retangulo::getBase(){
    return base;
}

void Retangulo::printDados(){
    cout << "A base é: " << getBase()<< endl
         << "A altura é: " << getAltura() << endl
         << "A área " << getAltura() * getBase() << endl;
}
