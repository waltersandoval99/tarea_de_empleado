#include "trabajador.cpp"
#include <iostream>
using namespace std;
main(){
	string codigo, nombre, puesto;
	int sueldo;
	
	cout<<"Ingrese puesto: ";
	cin>>puesto;
	cout<<"ingrese nombre: ";
	cin>>nombre;
	cout<<"ingrese sueldo: ";
	cin>>sueldo;
	cout<<"ingrese codigo de empleado: ";
	cin>>codigo;
	// instancia de un objeto
	trabajador obj=trabajador(puesto, nombre, sueldo, codigo);
	obj.mostrar();
	 
	cout<<"Modificar codigo: ";
	cin>>codigo; 
	obj.setCodigo(codigo);
	obj.mostrar();

	
}
