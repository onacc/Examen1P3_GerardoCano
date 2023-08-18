#pragma once
#include <iostream>;
#include <vector>
using namespace std;
class Numero{
	int numero;
	char Letras[];
public:
	Numero();
	Numero(int, char*);
	~Numero();
	vector<Numero*> procesarcadena();
	void asignarLetras(int);
	char* getLetras();
	void ObtenerSecuencias(vector<Numero*>);
};

