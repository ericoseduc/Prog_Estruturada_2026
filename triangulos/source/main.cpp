#include <iostream>

using namespace std;

int main(){

    int a, b, c;
    while(true){
        cout << "Digite 3 valores inteiros: ";
        cin >> a >> b >> c;
        if (a < b+c && b < a+c && c < a+b){
            cout << "Os valores " << a << ", " << b << ", " << c << " fomam um triangulo" << endl;
            if(a == b && b == c){
                cout << "O triangulo é equilátero" << endl;
            } else {
                if(a == b || b == c || a == c){
                    cout << "O triangulo é isoceles" << endl;
                } else {
                    cout << "O triangulo é escaleno" << endl;                
                }
            }
        } else
            cout << "Os valores" << a << ", " << b << ", " << c << " não fomam um triangulo" << endl;
        cout << endl;
    }
}