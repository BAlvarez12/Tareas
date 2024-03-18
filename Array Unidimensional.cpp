#include <iostream>
using namespace std;

main (){
	string semana[7]={"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
	semana[3]= "Jueves";
	for (int i=0;i<7;i++){
		cout<<semana[i]<<endl;
	}
	
	
	
	
	
/*	int dato;
	cout<<"Ingrese dato:";
	cin>>dato;
	cin.ignore();
	cout<<"ingrese Nombre Completo:";
//	cin>>nombre;
getline(cin,nombre);
	cout<<nombre<<endl;
	
	
	
	
	
	/*char nombre[30];
	cout<<"ingrese Nombre Completo:";
	//cin>>nombre;
	cin.get(nombre,30);
	cout<<nombre<<endl;
	
	
	
	
	/*int tam=0,suma=0,promedio=0;	
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"Ingrese nota "<<tam<<":"<<endl;
		cin>>notas[tam-1];
		cout<<"Desea Ingresar otra nota(s/n):";
		cin>>res;
	}while(res=='s'|| res== 'S');
	
	for(int i=0;i<tam;i++){
		suma+=notas[i];
		
		/*cout<<notas[i]<<endl;*/
		
	
	/*promedio = suma / tam;
	cout<<"El promedio Es :"<<promedio<<endl;
	
/*	cout<<"cuantas notas desea ingresar:";
	cin>>tam;
		int notas[tam]; //notas[5]
		for(int i=0;i<tam;i++){
			cout<<"Ingrese Notas :"<<i+1<<":";
			cin>>notas[i];
			
		}
			for(int i=0;i<tam;i++){
				suma+=notas [i];  //suma = suma + notas [i]
				
			/*cout<<notas[i]<<endl;;*/
		
	/*	}
		promedio = suma / tam;
		cout<<"el promedio es :"<<promedio<<endl;
		*/
		
		
/*	int nota1,nota2,nota3,nota4;*/
/*  int notas[4];/*={80,65,60,75};*/  // indice o pocision del arreglo inicia en 0
	// 0-3,0,1,2,3	
	/*notas[0]=80;
	notas[1]=65;
	notas[2]=60;
	notas[3]=65;*/
	
	/*	for (int i=0;i<=3;i++){
		cout<<i<<":"<<notas[i]<<endl;
	}
/*	for(int i : notas){
		cout<<i<<endl;*/
/*	}*/
	
	/*cout<<notas[0]<<endl;
	cout<<notas[1]<<endl;
	cout<<notas[2]<<endl;
	cout<<notas[3]<<endl;*/
	
	/*notas[2]=70;
	cout<<"Valor modificar (2)"<<notas[2]<<endl;*/
	
	
	
	
	
	system("pause");
}
