#include "Rectangulo.h"
Rectangulo::Rectangulo() {

}
void Rectangulo::ingresarnumeros() {
	int len;
	cout << "\nIngrese longitud del arreglo\n";
	cin >> len;
	len = leng;
	int* letras = new int[len];
	cout << "Entrada de numeros\nIngrese numeros entre 1 y 99";
	int temp;
	for (int i = 0; i < len; i++) {
		cin >> temp;
		if (temp > 0 && temp <= 99) {
			letras[i] = temp;
		}
		else {
			cout << "\nNumero no valido\nIngrese numeros entre 1 y 99\n";
			len++;
		}
		letras = numeros;
	}cout << "[";
	for (int i = 0; i < len; i++){
		cout << letras[i];
		if (i==len-1) {
			//nada
		}
		else {
			cout << ",";
		}
	}
	cout << "]";
}
int Rectangulo::ObtenerAreaMaxima() {
	int mayor;
	int verif;
	for ( int i = 0; i < leng; i++){
		if (numeros[i] > numeros[leng]) {
			mayor = numeros[0];
			verif = 0;
		}
		else {
			mayor = numeros[leng];
			verif = 1;
		}
	}
		



	
	Base = leng - 2;


	areamax = Base * Altura;
	return areamax;
	
}