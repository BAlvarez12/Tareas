#include <iostream>
using namespace std;

main(){
	int edad = 25,*p_edad;
	p_edad = &edad;
	
	cout<<"Variable edad: "<<edad<<endl;
		cout<<"Puntero edad: "<<*p_edad<<endl;
	//	cout<<"Puntero edad: "<<p_edad<<endl;
	cout<<"______cambiar valores_______"<<endl;
	*p_edad=40;
	
	cout<<"Variable edad: "<<edad<<endl;
		cout<<"Puntero edad: "<<*p_edad<<endl;s
		
			cout<<"______Otra Variable a p_edad valores_______"<<endl;
	int edad2=100;
	p_edad=&edad2;
	edad=400;
	cout<<"Variable edad: "<<edad<<endl;
		cout<<"Puntero edad: "<<*p_edad<<endl;
		cout<<"Variabel edad2: "<<edad2<<endl;
		
	system("pause");
}
