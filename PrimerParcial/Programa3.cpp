/*Programa 3
    Descripcion: Programa para usar cin, cout, 
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
    //Fin de la declaracion de variables

    cout<<"VarEntera contiene: " <<VarEntera <<endl
        <<"VarFlotante contiene: " <<VarFlotante <<endl
        <<"VarDoble contiene: " <<VarDoble <<endl
        <<"VarCaracter contiene: " <<VarCaracter <<endl
        <<"VarBool contiene: " <<VarBool <<endl
        <<"ApVarEntera contiene: " <<ApVarEntera <<endl <<endl;

    VarEntera = 5;
    VarCaracter = 'A';
    VarFlotante = 3.1416;
    VarDoble = 6.2832;
    VarBool = true;
    ApVarEntera = &VarEntera;

    cout<<"Despues de asignar valores a las variables" <<endl <<endl

        <<"VarEntera contiene: " <<VarEntera <<endl
        <<"VarFlotante contiene: " <<VarFlotante <<endl
        <<"VarDoble contiene: " <<VarDoble <<endl
        <<"VarCaracter contiene: " <<VarCaracter <<endl
        <<"VarBool contiene: " <<VarBool <<endl
        <<"ApVarEntera contiene: " <<ApVarEntera <<endl <<endl

        <<"Dame un valor entero: ";
    cin>>VarEntera;

    cout<<"Dame un valor flotante: ";
    cin>>VarFlotante;

    cout<<"Dame un valor doble: ";
    cin>>VarDoble;

    cout<<"Dame un caracter: ";
    cin>>VarCaracter;

    cout<<"Dame un valor booleano: ";
    cin>>VarBool;
    cout<<endl <<endl;

    cout<<"Despues de asignar valores via usuario a las variables" <<endl <<endl

        <<"VarEntera contiene: " <<VarEntera <<endl
        <<"VarFlotante contiene: " <<VarFlotante <<endl
        <<"VarDoble contiene: " <<VarDoble <<endl
        <<"VarCaracter contiene: " <<VarCaracter <<endl
        <<"VarBool contiene: " <<VarBool <<endl
        <<"ApVarEntera contiene: " <<ApVarEntera <<endl <<endl

        <<"La direccion donde estan ubicadas las variables" <<endl <<endl

        <<"VarEntera esta en: " <<&VarEntera <<endl
        <<"VarFlotante esta en: " <<&VarFlotante <<endl
        <<"VarDoble esta en: " <<&VarDoble <<endl
        <<"VarCaracter esta en: " <<&VarCaracter <<endl
        <<"VarBool esta en: " <<&VarBool <<endl
        <<"ApVarEntera esta en: " <<&ApVarEntera <<endl <<endl;

    ApVarFlotante = &VarFlotante;
    ApVarDoble = &VarDoble;
    ApVarCaracter = &VarCaracter;
    ApVarBool = &VarBool;
    ApApVarEntera = &ApVarEntera;

    cout<<"Los apuntadores contienen" <<endl <<endl

        <<"ApVarEntera contiene: " <<ApVarEntera <<endl
        <<"ApVarFlotante contiene: " <<ApVarFlotante <<endl
        <<"ApVarDoble contiene: " <<ApVarDoble <<endl
        <<"ApVarCaracter contiene: " <<ApVarCaracter <<endl
        <<"ApVarBool contiene: " <<ApVarBool <<endl
        <<"ApApVarEntera contiene: " <<ApApVarEntera <<endl <<endl

        <<"Siguiendo la ruta de los apuntadores" <<endl <<endl

        <<"VarEntera contiene: " <<*ApVarEntera <<endl
        <<"VarFlotante contiene: " <<*ApVarFlotante <<endl
        <<"VarDoble contiene: " <<*ApVarDoble <<endl
        <<"VarCaracter contiene: " <<*ApVarCaracter <<endl
        <<"VarBool contiene: " <<*ApVarBool <<endl
        <<"VarEntera contiene: " <<**ApApVarEntera <<endl <<endl;

    system("pause");
    return 1;
}//Fin de la funcion principal
