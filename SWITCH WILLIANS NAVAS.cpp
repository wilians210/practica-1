#include "iostream"  
#include "string"
#include <stdlib.h>

using namespace std;

main ()
{
	
	float num1, num2;   
    float i;
    int x;
    
    cout << "Ingrese el primer valor a operar: " << "\n";  
    cin >> num1;   

    cout << "Ingrese el segundo valor a operar: " << "\n"; 
    cin >> num2;   
		
	  cout << "\n" << endl;
	
	cout << "Ingrese el numero de la operacion que desea realizar: " << "\n";
	cout << "1 suma: " << "\n"; 
	cout << "2 resta: " << "\n"; 
	cout << "3 multiplicacion: " << "\n"; 
	cout << "4 division: " << "\n"; 
	cin >> x;
	
	  cout << "\n" << endl; //para dejar una linea en blanco
	
	//SWITCH: a mi parecer el switch es como la estructura "segun" de pseint, ya que *segun* la eleccion del usuario el programa *hara* lo correspondiente a la variable ingresada. 
	
	switch (x)
	{
		
		case 1:
			{
				i=num1+num2;
				cout << "El resultado de la suma es: " << i << "\n";
				break;
			}
			
		case 2:
			{
				i=num1-num2;
				cout << "El resultado de la resta es: " << i << "\n";
				break;
			}
		
		case 3:
			{
				i=num1*num2;
				cout << "El resultado de la multiplicacion es: " << i << "\n";
				break; 
			}
		
		case 4:
			{
				i=num1/num2;
				cout << "El resultado de la division es: " << i << "\n";
				break;
			}
			
		default:
			{
				cout << "Opcion no valida: " << "\n"; 
			}		
	}
	
	system("pause"); //para dejar una pausa al momento de terminar le ejecucion.
}

