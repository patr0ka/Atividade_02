#include <iostream>
using namespace std;

double CalcAreaRetangulo(double c, double l); // protótipo antes do main

int main(){
    double c, l;
    cout << "Insira o comprimento" << endl;
    cin >> c;
    cout << "Insira a largura" << endl;
    cin >> l;
    CalcAreaRetangulo(c,l);
}

double CalcAreaRetangulo(double c, double l){ // instruções depois
    cout << "Area do retagulo eh " << (c*l) << endl;
}