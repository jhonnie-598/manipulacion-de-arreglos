/*******
objetiv:manipulacin de arreglos
autores todos
agosto 6 
******/




#include <iostream>
#define TAM_MAX 45
#include <iomanip>

using namespace std;

// ---------------------PROTOTIPOS------------
int leer_vector(float notas []);
void mostrar_vector(float notas [], int n);

int main()
{
	int n;
	float notas [TAM_MAX];
	n = leer_vector (notas);
	mostrar_vector (notas, n);
	
	
	return 0;
}

//---------------
int leer_vector(float notas [])
{
	int n;
	int i;
	do
	{
		cout << "ingrese total elementos del vetor (1,45) ==>";
		cin >>n;
	}while (n < 1 or n >45 );
	
	for (i = 0; i < n; i++ )
	{
		cout << "\ningrese elemento " << i <<  ":  ";
		cin >>notas [i];
		while(notas [i] < 0.0 or notas [i] > 5.0 )
		{
			cout << " ingrese nota valida" <<i << ";";
			cin >> notas [i];
		}
	}
	
	return n;
	
}
void mostrar_vector (float notas [], int n)
{
	int i;
	
	system ( "cls");
	cout << "\t\t notas de los estudiantes" << endl;
	cout << "la direccion del primer del arreglo es ===>"  << notas << endl;
	for (i = 0; i < n; i++)
	{
		cout<< notas [i] << endl;
	}
}
