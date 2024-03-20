#include<iostream>
using namespace std;
// punteros con asignacion de memoria dinamica;
// new =reservar un espacio de memoria
//delete [ = libera la memoria
//recolector de basura


main(){
	int fil = 0, col=0,**pm_notas;
	cout<<"Ingrese la cantidad de estudiantes:";
	cin>>fil;
	cout<<"Ingrese la camtidad de notas por estudiantes:";
	cin>>col;
	
	pm_notas = new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	}
	for(int i=0;i<fil;i++){
		cout<<"________Estudiante_________"<<i<<endl;
		for(int ii=0;ii<col;ii++){
			cout<</*"Estudiante"<<i<<*/", Nota:"<<ii<<".";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"_________________"<<endl;
	}
	cout<<"-----Mostrar Notas--------"<<endl;
for(int i=0;i<fil;i++){
	//	cout<<"________Estudiante_________"<<i<<endl;
		for(int ii=0;ii<col;ii++){
		//	cout<</*"Estudiante"<<i<<*/", Nota:"<<ii<<".";
			cout<<*(*(pm_notas+i)+ii)<<endl;
}cout<<"_______________________________"<<endl;
}
for(int i=0;i<fil;i++){
		delete[]pm_notas[i];
		}
		delete[]pm_notas;
		
	system ("pause");
}



/*	int total= 0, *p_notas;
	p_notas = new int[total];
	//int notas[total];
	char res;
// 	int *p_notas=notas;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea Ingresar Otro valor (s/n)):";
		cin>>res;
	}while(res=='s'|| res=='S');
	
	cout<<"--------------Mostrar Notas--------------"<<endl;
	for(int i=0;i<total;i++){
		cout<<"Nota("<<i<<"):"<<*p_notas<<endl;
		p_notas++;
	}
	delete[]p_notas;
*/



/*	int edad, *p_edad;
	p_edad =&edad;
	
	cout<<"Ingrese Edad:";
	cin>>*p_edad;
	cout<<*p_edad<<endl;
	
	if(*p_edad>18){
		cout<<"Mayor de edad"<<endl;
		}else{
			cout<<"Menor de edad"<<endl;
		}*/
