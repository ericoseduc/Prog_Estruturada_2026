#include <iostream>

using namespace std;

bool anoBissexto(int);
int diaSemana(int, int, int);
void diaSemana(int);
bool utildatas(int, int, int);

int main(){
    int dSemana;
    int dia, mes, ano;
    do{
        cout << "########################################" << endl;
        cout << "Digite o dia como 0 (zero) para sair" << endl;
        cout << "Digite uma data no formato dd mm aaaa: ";
        cin >> dia >> mes >> ano;
        cin.clear();
        if (dia == 0){
            cout << "Saindo ...";
            break;
        }
        if(utildatas(dia, mes, ano)){ 
            dSemana = diaSemana(dia, mes, ano);
            diaSemana(dSemana);
        }
        cout << endl;
    } while (true);
    return 0;
}

bool anoBissexto(int ano){
    return ((ano % 4 == 0 && !(ano % 100 == 0)) || ano % 400 == 0);
}
int diaSemana(int dia, int mes, int ano){
    int dSemana = ano + dia + 3 * (mes-1) - 1;
    if(mes < 3)
        ano--;
    else
        dSemana -= int(0.4*mes+2.3);
    dSemana += int(ano/4) - int((ano/100 + 1)*0.75);
    dSemana %= 7;

    return dSemana;
}
void diaSemana(int dSemana){
    switch (dSemana)
    {
    case 0:
        cout << "Domingo";
        break;
    case 1:
        cout << "Segunda";
        break;
    case 2:
        cout << "Terça";
        break;
    case 3:
        cout << "Quarta";
        break;
    case 4:
        cout << "Quinta";
        break;
    case 5:
        cout << "Sexta";
        break;
    case 6:
        cout << "Sábado";
    }
}
bool utildatas(int dia, int mes, int ano){
    int diaMes[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

    if(ano < 0){
        cout << "não existe ano negativo" << endl;
        return false;
    }

    if(!anoBissexto(ano) && mes == 2  && dia == 29){
        cout << "O ano " << ano << "não é bissexto!" << endl;
        return false;
    }

    if(dia > diaMes[mes] || dia < 0){
        cout << dia << " é incompatível com mês " << mes << endl;
        return false;
    }

    return true;
}