#include <iostream>
using namespace std;
main(){
     /*
	// i++, i+=1, i=i+1
	int contar = 0;
	for (int i=0;i<=10;i++){// 1 hasta 10
		cout<<i<<endl;
		contar++;
	}
	cout<<"ciclos:"<<contar<<endl;
	system("pause");*/
	
	/*int i=0;
	int contar =0;
	for (i=4;i<=8;i+=2){// 1 hasta 10
		cout<<i<<endl;
		contar++;
		
	}
	cout<<"i fuera:"<<i<<endl;
	cout<<"ciclos:"<<contar<<endl;
	system("pause");*/
	
	/*for (int i=0;i<0;i++){// 1 hasta 10
		
		if(i==5){
			cout<<"if"<<endl;
			break;
		}
		
		cout<<i<<endl;
	}
		cout<<"fuera del for"<<endl;
		system("pause");*/
	
	/*for (float i=0;i<10;i+=0.1){
		cout<<i<<endl;
	}*/
	

/*		
	int datos[] = {10,40,100,200,3000};
	cout<<sizeof(datos)<<endl;
	
	for(int i=0;i<;i++){
		cout<<datos[i]<<endl;
	}
	cout<<"fuera del for"<<endl;
	
	system("pause");*/
	
	
/*	int tam=0;
	int datos[]={10,40,100};
	tam=sizeof(datos)/sizeof(datos[0]);
		
		for(int i : datos){
			cout<<i<<endl;
		}
		
	/*	for(int i=0;i<tam;i++){
		cout<<datos[i]<<endl;
	}*/
	
	
	
	int inicio = 0,fin= 0, res=0;
	
	cout<<"Ingrese Tabla Inicial:";
	cin>>inicio;
	cout<<"Ingrese Tabla  final:";
	cin>>fin;
	
	for(int rango = inicio; rango<=fin;rango++){
	cout<<"tabla de "<<rango<<endl;	
	
		for (int i=1;i<=10;i++){
		res = rango * i;
		cout<<rango<<"x"<<i<<"="<<res<<endl;
		}
		
	}
	
		
	system("pause");
}
