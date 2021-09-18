#include "iostream" 
#include <stdlib.h>

//Willians Heriberto Navas Reyes 0909-21-11752

using namespace std;

main ()
{
	int contador, i;
	float ahorro;
	
	contador=0; //todo contador debe ser iniciado en 0
	
	for (i=1;  i<=12; i++) //i++ para incrementar de 1 en 1 la accion
	{
    cout << "Ingrese el monto ahorrado en el mes " << i << endl;  
    cin >> ahorro;  
    
    contador=contador+ahorro;
    }
    
    cout << "\n" << endl;
    cout << "El total ahorrado en 12 meses es Q" << contador << endl;  
    
  system("pause");
}