/*Programa 3
Descripción: Programa para usar cin, cout, 
             tipos de dato y variables.
Salas Mateos Marco Antonio
PP18042270
1CV18
Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin.
using namespace std;

int main (void)
{
 int VarEntera;
 float VarFlotante;
 double VarDoble;
 char VarCaracter;
 bool VarBool;//Los valores para asignar son true o false
 int* ApVarEntera;
 float* ApVarFlotante;
 double* ApVarDoble;
 char* ApVarCaracter;
 bool* ApVarBool;
 int** ApApVarEntera;
 //Fin de la declaración de variables
 
 cout <<"VarEntera contiene: " << VarEntera <<endl;
 cout <<"VarFlotante contiene: " << VarFlotante <<endl;
 cout <<"VarDoble contiene: " << VarDoble <<endl;
 cout <<"VarCaracter contiene: " << VarCaracter <<endl;
 cout <<"VarBool contiene: " << VarBool <<endl;
 cout <<"ApVarEntera contiene: " << ApVarEntera <<endl <<endl;
 
 VarEntera = 5;
 VarCaracter = 'A';
 VarFlotante = 3.1416;
 VarDoble = 6.2832;
 VarBool = true;
 ApVarEntera = &VarEntera;
 
 cout <<"Despues de asignar valores a las variables" <<endl <<endl;
 
 cout <<"VarEntera contiene: " << VarEntera <<endl;
 cout <<"VarFlotante contiene: " << VarFlotante <<endl;
 cout <<"VarDoble contiene: " << VarDoble <<endl;
 cout <<"VarCaracter contiene: " << VarCaracter <<endl;
 cout <<"VarBool contiene: " << VarBool <<endl;
 cout <<"ApVarEntera contiene: " << ApVarEntera <<endl <<endl;
  
 cout <<"Dame un valor entero: ";
 cin >> VarEntera;
 
 cout <<"Dame un valor flotante: ";
 cin >> VarFlotante;
 
 cout <<"Dame un valor doble: ";
 cin >> VarDoble;
 
 cout <<"Dame un caracter: ";
 cin >> VarCaracter;
 
 cout <<"Dame un valor booleano: ";
 cin >> VarBool;
 cout <<endl <<endl;
 
 cout <<"Despues de asignar valores via usuario a las variables" <<endl <<endl;
 
 cout <<"VarEntera contiene: " << VarEntera <<endl;
 cout <<"VarFlotante contiene: " << VarFlotante <<endl;
 cout <<"VarDoble contiene: " << VarDoble <<endl;
 cout <<"VarCaracter contiene: " << VarCaracter <<endl;
 cout <<"VarBool contiene: " << VarBool <<endl;
 cout <<"ApVarEntera contiene: " << ApVarEntera <<endl <<endl;
 
 cout <<"La direccion donde estan ubicadas las variables" <<endl <<endl;
 
 cout <<"VarEntera esta en: " << &VarEntera <<endl;
 cout <<"VarFlotante esta en: " << &VarFlotante <<endl;
 cout <<"VarDoble esta en: " << &VarDoble <<endl;
 cout <<"VarCaracter esta en: " << &VarCaracter <<endl;
 cout <<"VarBool esta en: " << &VarBool <<endl;
 cout <<"ApVarEntera esta en: " << &ApVarEntera <<endl <<endl;
 
 ApVarFlotante = &VarFlotante;
 ApVarDoble = &VarDoble;
 ApVarCaracter = &VarCaracter;
 ApVarBool = &VarBool;
 ApApVarEntera = &ApVarEntera;
 
 cout <<"Los apuntadores contienen" <<endl <<endl;
 
 cout <<"ApVarEntera contiene: " << ApVarEntera <<endl;
 cout <<"ApVarFlotante contiene: " << ApVarFlotante <<endl;
 cout <<"ApVarDoble contiene: " << ApVarDoble <<endl;
 cout <<"ApVarCaracter contiene: " << ApVarCaracter <<endl;
 cout <<"ApVarBool contiene: " << ApVarBool <<endl;
 cout <<"ApApVarEntera contiene: " << ApApVarEntera <<endl <<endl;
 
 cout <<"Siguiendo la ruta de los apuntadores" <<endl <<endl;
 
 cout <<"VarEntera contiene: " << *ApVarEntera <<endl;
 cout <<"VarFlotante contiene: " << *ApVarFlotante <<endl;
 cout <<"VarDoble contiene: " << *ApVarDoble <<endl;
 cout <<"VarCaracter contiene: " << *ApVarCaracter <<endl;
 cout <<"VarBool contiene: " << *ApVarBool <<endl;
 cout <<"VarEntera contiene: " << **ApApVarEntera <<endl <<endl;
 
 system("pause");
 return 1;
}//Fin de la función principal
