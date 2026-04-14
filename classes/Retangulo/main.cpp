#include <iostream>
#include "Retangulo.cpp"

using namespace std;

int main(){
    
    Retangulo ret = Retangulo(5,6);
    int a, b;
    cout << "Digite a altura do retangulo: " ;
    cin >> a;
    cout << "Digite a base do retangulo: ";
    cin >> b;
    Retangulo ret2 = Retangulo(a,b);

    ret.printDados();
    ret2.printDados();
    
    return 0;
}