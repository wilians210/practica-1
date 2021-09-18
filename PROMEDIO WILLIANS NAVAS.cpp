#include "iostream"  
#include "string"
#include <stdlib.h>

using namespace std;

main ()
{
	
	int nota1, nota2, nota3;
	float promedio;
	string nombre;
	
	cout << "Ingrese su nombre" << endl;
	getline(cin, nombre);
	
	cout << "Ingrese su primera nota: " << endl;  
    cin >> nota1;  
	
	cout << "Ingrese su segunda nota: " << endl;  
    cin >> nota2;  
    
    cout << "Ingrese su tercera nota: " << endl;  
    cin >> nota3;  
    
    promedio=(nota1+nota2+nota3)/3;
    
    cout << "\n" << endl; //para dejar una linea en blanco
    
    cout << nombre << " su promedio es: " << promedio << endl; ;  

    system("pause"); //para dejar una pausa al momento de terminar le ejecucion.
}
