/*Programa 17
Descripcion: Programa para sumar
             2 numeros enteros con funciones paso por copia
Salas Mateos Marco Antonio
PP18042270
1CV18
Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin.
using namespace std;

int Leer(void);
int Sumar(int V1, int V2);
void Imprimir(int V1, int V2, int Suma);

int main(void)
{
	int V1, V2, Res;

	V1 = Leer();
	V2 = Leer();
	Res = Sumar(V1, V2);
	Imprimir(V1, V2, Res);

    system("pause");
    return 1;
}//Fin de la funcion principal

int Leer(void)
{
	int V;
	cout << "Ingresa un valor" << endl; 
	cin >> V;
	cout << endl;
	return V;
}//Fin Leer

int Sumar(int V1, int V2)
{
	int Suma;
	Suma = V1 + V2;
	return Suma;
}//Fin Sumar

void Imprimir(int V1, int V2, int Suma)
{
	cout << "El resultado es: " << endl
		<< V1 << " + " << V2 << " = " << Suma << endl << endl;
}//Fin Imprimir