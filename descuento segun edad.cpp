#include "iostream"  
#include "string"
#include <stdlib.h>

using namespace std;

main ()
{
 
    float descuento, prefinal;
    int x, tv=3200, refri=3000, edad;
    	
	cout << "Productos disponibles" << "\n";
	cout << "1 tv Q3200 " << "\n"; 
	cout << "2 refrigerador 3000" << "\n"; 

	cout << "Ingrese el numero del producto que desea adquirir" << "\n"; 
	cin >> x;
	cout << "\n";
	 
	cout << "Descuentos segundo su edad" << "\n";
	cout << "Edad de 50 o mas 10%" << "\n"; 
	cout << "Edad de 35 a 49 5%" << "\n"; 
	cout << "Menor de 35 precio normal" << "\n"; 
	
	cout << "\n";
	cout << "Ingrese su edad" << "\n"; 
	cin >> edad;
	cout << "\n";	
	
	switch (x)
	{
		
		case 1:
			{
				if (edad>=50){
				descuento= (tv*10)/100;
				prefinal=tv-descuento;
				cout << "El precio final del producto con el 10% de descuento es Q" << prefinal << "\n";								
				}
				
				else if (edad<=49 && edad>=35){
				descuento=(tv*5)/100;
				prefinal=tv-descuento;
				cout << "El precio final del producto con el 5% de descuento es Q" << prefinal << "\n";
				}
								
				else {
				prefinal=tv; 	
				cout << "El precio del producto es Q" << prefinal << "\n";			
				}
				
				
				break;
			}
			
		case 2:
			{
				if (edad>=50){
				descuento= (refri*10)/100;
				prefinal=refri-descuento;
				cout << "El precio final del producto con el 10% de descuento es Q" << prefinal << "\n";								
				}
				
				else if (edad<=49 && edad>=35){
				descuento=(refri*5)/100;
				prefinal=refri-descuento;
				cout << "El precio final del producto con el 5% de descuento es Q" << prefinal << "\n";
				}
								
				else {
				prefinal=refri; 	
				cout << "El precio del producto es Q" << prefinal << "\n";			
				}
				
				
				break;
			}
 
			
			default:
			{
				cout << "Opcion no valida: " << "\n"; 
			}		
	}
	
	system("pause"); //para dejar una pausa al momento de ter
	
}