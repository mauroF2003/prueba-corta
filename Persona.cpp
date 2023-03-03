#include <iostream>
using namespace std;
class Persona{
	//atributos
	protected : string nombres, apellidos, direccion, fecha_nacimiento;
				int telefono;
				double cui;
				//constructor
	protected :
			Persona	(){
			}
			Persona (string nom,string ape,string dir,string fn,int tel,double c){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				fecha_nacimiento = fn;
				telefono = tel;
				cui=c;
			}
	//metodo
	void mostrar();
	void Agregar();
};
