// LabExamenP3_GerardoCano.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rectangulo.h"
using namespace std;
int main(){
    
}
void menu() {
    int op;
    do {
        cout << "1.Secuencias Posibles\n2.Area Maxima\nIngrese una opcion:\n";
        cin >> op;
        switch (op) {
        case 1:
            
            break;
        case 2:
            Rectangulo r;
            r.ingresarnumeros();
            r.ObtenerAreaMaxima();
            break;
        default:
            cout << "Saliendo";
        }
    } while (op);
}


