#include <iostream>
#include <iomanip>

using namespace std;

long int unsigned dataJuliana(int, int, int);
int unsigned diaSemana(int long unsigned);
void diaSemana(int unsigned);
void dataGregoriana(int long, int[]);
void escreveDataGregoriana(int[]);
long int unsigned dataPascoa(int); // retorna uma data Juliana
long int unsigned dataCarnaval(int); // retorna uma data Juliana
long int unsigned dataCorpusChristi(int); // retorna uma data Juliana

int main(){
    int ano;
    int dtGregoriana[3];
    while (true)
    {
        cout << "Informe o ano que deseja o calendário no formato aaaa: ";
        cin >> ano;
        cin.clear();
        
        dataGregoriana(dataPascoa(ano), dtGregoriana);
        escreveDataGregoriana(dtGregoriana);
        cout << diaSemana(dataPascoa(ano)) <<" de Páscoa" << endl;

        dataGregoriana(dataCarnaval(ano), dtGregoriana);
        escreveDataGregoriana(dtGregoriana);
        cout << diaSemana(dataCarnaval(ano)) << " de Carnaval" << endl;

        dataGregoriana(dataCorpusChristi(ano), dtGregoriana);
        escreveDataGregoriana(dtGregoriana);
        diaSemana(diaSemana(dataCorpusChristi(ano)));
        cout << " - Corpus Christi" << endl;
    }
}

long int unsigned dataJuliana(int dia, int mes, int ano){
    return (1461 * (ano + 4800 + (mes - 14 ) / 12)) / 4 
    + (367 * ( mes - 2 - 12*((mes - 14)/12))) / 12
    - (3 * (( ano + 4900 + (mes - 14)/12)/100)) / 4
    + dia - 32075;
}

int unsigned diaSemana(int long unsigned dataJuliana){
    return dataJuliana % 7;
}

void diaSemana(int unsigned dSemana){
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
    cout << " ";
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
    int a = ano % 19;
    int b = ano / 100;
    int c = ano % 100;
    int d = b / 4;
    int e = b % 4;
    int f = (b + 8) / 25;
    int g = (b - f + 1) / 3;
    int h = (19 * a + b - d - g + 15) % 30;
    int i = c / 4;
    int k = c % 4;
    int l = (32 + 2 * e + 2 * i - h - k) % 7;
    int m = (a + 11 * h + 22 * l) / 451;
    int mes = (h  + l - 7 * m + 114) / 31;
    int dia = ((h + l - 7 * m + 114) % 31) + 1;
    return dataJuliana(dia, mes, ano);
}

long int unsigned dataCarnaval(int ano){
 //Pascoa - 41 terça de carnaval , -45 sabado de carnaval
    return dataPascoa(ano) - 47;
}
long int unsigned dataCorpusChristi(int ano){
//Pascoa + 60
    return dataPascoa(ano) + 60;
}