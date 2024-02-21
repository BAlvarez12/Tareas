#include <iostream>
#include "Cliente.cpp"
using namespace std;
main (){
	string nit,nombres,apellidos,direccion;
	int telefono;
	cout<<"ingresar Nit:";
	cin>>nit;
	cout<<"Ingresar Nombres:";
	cin>>nombres;
	cout<<"Ingresar apellidot:";
	cin>>apellidos;
	cout<<"Ingresar direccion:";
	cin>>direccion;
	cout<<"Ingresar telefono:";
	cin>>telefono;
	//instancias de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	cout<<"ingresar Nit:";
	cin>>nit;
	obj.setnit(nit);
//cout<< "Datos del cleinte"<<obj.getnit()<<","<<obj.getnombres()<<","<<obj.getapellidos()<<","<<obj.getdireccion()<<","<<obj.gettelefono()<<endl;
	
	/*Cliente obj = Cliente ();
	obj.setnit(nit);
	obj.setapellidos(apellidos);
	obj.setdireccion(direccion);
	obj.setnombres(nombres),
	obj.settelefono(telefono);
	obj.mostrar();*/
	
}
