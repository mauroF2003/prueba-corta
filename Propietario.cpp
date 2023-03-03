#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona {
	//atributos
	private : string nit;
	
	
	//constructor
	public : 
	Propietario (){
	}
	
	Propietario(string nom,string ape,string dir,string fn,int tel,string n,double c) : Persona(nom,ape,dir,fn,tel,c){
		nit = n;
		
	}
	//metodos
	//set (modificar)
	void setCuc(double c){cui = c;}
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFechaNacimiento(string fn){fecha_nacimiento = fn;}
	void setTelefono(int tel){telefono = tel;}
	//get (mostrar)
	double getCui(){return cui;}
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFechaNacimiento(){return fecha_nacimiento;}
	int getTelefono(){return telefono;}
	//metodos
	
	void Agregar(){
		cout<<"Agregar metodo"<<endl;
	}
	
	void mostrar(){
		cout<<"_____________________"<<endl;
		
		
		cout<<cui<<", "<<nit<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<fecha_nacimiento<<", "<<telefono<<endl;
	}
};

