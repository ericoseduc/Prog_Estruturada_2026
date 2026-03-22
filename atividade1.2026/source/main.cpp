#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    cout << "Digite valores para a, b e c, nesta ordem a b c: ";
    cin >> a >> b >> c;

    for(int d = b; d < c ; d++){
        if(d % a == 0){
            cout << d << " ";
        }
    }
    cout << endl;
}
