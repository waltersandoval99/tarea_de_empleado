#include <iostream>
using namespace std;
class Empleado{
	protected : string puesto, nombre;
				int sueldo;
	//constructor
	protected :
			Empleado(){
			}
			Empleado(string pust, string nom, int sul){
				puesto = pust;
				nombre = nom;
				sueldo = sul;
			}
			
			
	//metodo
	void mostrar();
	
	
};
