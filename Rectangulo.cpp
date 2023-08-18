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
	delete[] letras;
}
int Rectangulo::ObtenerAreaMaxima() {
	int mayor,izq,derch;
	int j = 0;
	for ( int i = 0; i < leng-1; i++){
		//Altura = 
		if (numeros[j] > numeros[leng]) {
			j++;
			derch = numeros[j];
			
		}
		else if(numeros[leng]<numeros[j]) {
			leng--;
			izq = numeros[leng];
			
		}
		else if (numeros[leng] == numeros[j]) {
			j + 1;
			derch = numeros[j];
		}
	}

		



	
	//Base = leng - 2;


	areamax = Base * Altura;
	return areamax;
	
}