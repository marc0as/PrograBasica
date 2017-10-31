/*Programa 14
	Descripción: Programa para 5 casos
             utilizando for
	Salas Mateos Marco Antonio
	PP18042270
	1CV18
	Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin
using namespace std;

int Menu(void);
void Imprimir(int Opc);
double LeerSuma(void);
double LeerFact(void);
double LeerSeri(void);
double CalcSuma(int Num);
double Fact(int Num);
double CalcSeri(int X, int N);

int main (void)
{
    int Opc;
    do{//Inicio do-while para repetir       
        do{//Inicio do-while del error
            
            Opc = Menu ( );
                        
        }while (Opc<1 || Opc>5);//Fin do-while del error
        
        switch (Opc)
        {
			   case (1):
					cout << "Ingresa un valor: ";
					cin << Num;
					cout << endl;
                    SumaS(Num);
               break;
           
               case (2):
                    Factorial ()
               break;
           
               case (3):
                    Histgr ( );
               break;
           
               case (4):
                    cout <<"Ingresa la constante: ";
                    cin >>Cnte;
                    cout <<endl;
                    
                    cout <<"Ingresa N: ";
                    cin >>Num;
                    cout <<endl <<endl;
                    
                    Res=0;
                    for (int j=1; j<=Num; j++)
                    {
                        Nume = pow(Cnte,j+1);
                        
                        Deno=1;
                        
                        for (int i=j; i>1; i--)
                        {
                            Deno = Deno*i;        
                        }
                        
                        if ( j % 2 == 0)
                        {
                           Res = Res - (Nume/Deno);
                        }
                        else
                        {
                            Res = Res + (Nume/Deno);
                        }
                    }
                    cout <<"RT" <<" = " <<Res <<endl <<endl; 
               break;
        }//Fin switch
        
        if (Opc!=5)
           system("pause");
        
    }while (Opc!=5);//Fin do-while repetir    
    return 1;
}//Fin de la funci�n principal

int Menu(void)
{
	int Opc;
	do{
		system("cls");
		cout << "Operaciones Matematicas" << endl << endl
		
			<< "1.- Suma sucesiva" << endl
			<< "2.- Factorial" << endl
			<< "3.- Serie" << endl
			<< "4.- Salir" << endl << endl;

			<< "Selecciona una opcion: " <<endl;

		cin >>Opc;
		cout <<endl <<endl;
		if (Opc<1 || Opc>4)
		{
			cout << "ERROR!" << endl
			<< "Elige una opcion correcta" << endl << endl;
			system("pause");
		}
	}while (Opc<1 || Opc>4);
	return Opc;
}//Fin de Menu

void Imprimir(int Opc);
double LeerSuma(void);
double LeerFact(void);
double LeerSeri(void);
double CalcSuma(int Num);
double Fact(int Num);
double CalcSeri(int X, int N);

double SumaS(int Num)
{
	double Res = 0;

	for (int i = Num; i>0; i--)
	{
		Res = Res + i;
	}
	cout << "E" << Num << " = ";

	for (int i = Num; i>0; i--)
	{
		cout << i;
		if (i != 1)
			cout << " + ";
	}
	cout << " = " << Res << endl << endl;
}//Fin de SumaS

double Factorial(int Num)
{
	int Num;
	double Res;
	cout << "Ingresa un valor: ";
	cin >> Num;
	cout << endl;

	Res = 1;
	for (int i = Num; i>1; i--)
	{
		Res = Res*i;
	}
	cout << Num << "!" << " = ";

	for (int i = Num; i>0; i--)
	{
		cout << i;
		if (i != 1)
			cout << " X ";
	}
	cout << " = " << Res << endl << endl;
}//Fin de Factorial

void Histgr(void)
{
	int Num;
	cout << "Ingresa un valor: ";
	cin >> Num;
	cout << endl;

	for (int j = Num; j>0; j--)
	{
		cout << j << "\t";
		for (int i = 0; i<j; i++)
		{
			cout << "*  ";
		}
		cout << endl;
	}
	cout << endl;
}
