#include <iostream>
#include <iomanip>

using namespace std;

long int unsigned dataJuliana(int, int, int);
int unsigned diaSemana(int, int, int);
void diaSemana(int);
void dataGregoriana(int long, int[]);
void escreveDataGregoriana(int[]);
long int unsigned dataPascoa(int);
void dataCarnaval(int);
void dataCorpusChristi(int);

int main(){
    int dia, mes, ano;
    int dtGregoriana[3];
    while (true)
    {
        cout << "Digite uma data no formato dd mm aaaa: ";
        cin >> dia >> mes >> ano;
        cin.clear();
        
        diaSemana(diaSemana(dia, mes, ano));
        dataGregoriana(dataJuliana(dia, mes, ano), dtGregoriana);

        escreveDataGregoriana(dtGregoriana);
        cout << endl;
    }
}

long int unsigned dataJuliana(int dia, int mes, int ano){
    return (1461 * (ano + 4800 + (mes - 14 ) / 12)) / 4 
    + (367 * ( mes - 2 - 12*((mes - 14)/12))) / 12
    - (3 * (( ano + 4900 + (mes - 14)/12)/100)) / 4
    + dia - 32075;
}

int unsigned diaSemana(int dia, int mes, int ano){
    return dataJuliana(dia, mes, ano) % 7;
}

void diaSemana(int dSemana){
    switch (dSemana)
    {
        case 0:
            cout << "Segunda";
            break;
        case 1:
            cout << "Terça";
            break;
        case 2:
            cout << "Quarta";
            break;
        case 3:
            cout << "Quinta";
            break;
        case 4:
            cout << "Sexta";
            break;
        case 5:
            cout << "Sábado";
            break;
        case 6:
            cout << "Domingo";
            break;
    }
    cout << endl;
}

void dataGregoriana(int long dataJuliana, int dGregoriana[]){
    int B = dataJuliana + 68569;
    int N = (B * 4) / 146097;
    B = B - ((146097 * N + 3) / 4);
    int K = (4000 * (B + 1)) / 1461001;
    B = B - (1461 * K) / 4 + 31;
    int J = ( 80 * B) / 2447;
    dGregoriana[0] = B - (2447 * J) / 80;
    B = (J / 11);
    dGregoriana[1] = J + 2 - (12 * B);
    dGregoriana[2] = 100 * (N - 49) + K + B;
}

void escreveDataGregoriana(int data[3]){
    int dia = data[0];
    int mes = data[1];
    int ano = data[2];
    dia < 10 ? cout << 0 << dia : cout << dia;
    cout << "/";
    mes < 10 ? cout << 0 << mes : cout << mes;
    cout << "/";
    cout << ano;
}

long int unsigned dataPascoa(int ano){
    int A = ano%19;
    int B = ano/100;
    int C = ano%100;
    int D = B/4;
    int E = B%4;
    int F = 
}
void dataCarnaval(int ano){
 
}
void dataCorpusChristi(int ano){

}