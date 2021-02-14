#include "empleado.cpp"
#include <iostream>
using namespace std;

class trabajador : Empleado {
	// atributos
	private : string codigo;
	
	//constructor
	public :
	trabajador(){
	}
	trabajador(string pust, string nom, int sul, string cod) : Empleado(pust,nom,sul){
	codigo = cod;
	 
	}
	//metodos
	//set (modificar)
	void setCodigo(string cod){codigo= cod;}
	void setPuesto(string pust){puesto = pust;}
	void setNombre(string nom){nombre = nom;}
	void setSueldo(int sul){sueldo = sul;}
	// get(mostrar)
	string getCodigo(){return codigo;}
	string getPuesto(){return puesto;}
	string getNombre(){return nombre;}
	int getSueldo(){return sueldo;}
	//metodos
	void mostrar(){
		cout<<"---------------"<<endl;
		cout<<codigo<<","<<puesto<<","<<nombre<<","<<sueldo<<endl;
	}		
	
};
