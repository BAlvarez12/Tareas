#include<iostream>
using namespace std;
main(){
/*/numero es positivo>0 o negativo<0
	int num=0;
	cout<<"Ingrese el numero:";
	cin>>num;
	if(num>0){//>0
		//entra a aca cuando la condicion es verdadera
		cout<<"Positivo"<<endl;	
	}else{//<=0
		if(num==0){// 0
			cout<<"Neutro"<<endl;	
			}else{//<0
				cout<<"negativo"<<endl;	
		}
		
	}*/
	
	
	
/*	string pais="";
	cout<<"ingrese el pais";
	cin>>pais;
		if(pais=="guatemala"){
			cout<<"yo soy de"<<pais<<"mi pais"<<endl;
		}else{
			cout<<pais<<endl;
			
		}*/
		
		
		
		/*
		
		// determinar si un numero es par o impar
		int num=0;
		cout<<"Ingrese Numero:";
		cin>>num;
		// dividir un numero entre dos su residuo es cero entonces es par caso contrario es impar
		if((num%2)==0){
			cout<<"par"<<endl;
		}else{
			cout<<"impar"<<endl;
		}*/
		
		
		// and(y) &&
		// or(o) II
		
		//Puede entrar a mi clase si usted trae un lapiz y un lapicero
		// and (y) = elvalor es verdadero si ambas son verdaderas
		// Puede entrar a mi clase si usted trae un lapiz o un lapicero 
		//or (o) = el valor es verdadero si por lo menos una es verdadero
			// Puede entrar a mi clase si usted trae un lapiz o un lapicero y un cuaderno
		
		
	/*	char lapiz,lapicero, cuaderno;
		cout<<"trae lapiz (s/n):";
		cin>>lapiz;
		cout<<"Trae lapicero (s/n):";
		cin>>lapicero;
		cout<<"Trae cuaderno (s/n):";
		cin>>cuaderno;
			if((lapiz=='s'|| lapicero=='s')&& cuaderno=='s'){
				cout<<"Puede ingresar"<<endl;
			}else{
				cout<<"lo siento no puede ingresar"<<endl;*/
				
				
				
				
		// funciona = si
		// es funcional?
		//	es eficiente	
		/*int codigo=0;
		cout<<"Ingrese codigo de area:";
		cin>>codigo;
		if(codigo==502){
			cout<<"Guatemala"<<endl;
		}
		if(codigo==503){
			cout<<"El salvador"<<endl;
	}
		if(codigo==504){
			cout<<"Honduras"<<endl;
	}
		if(codigo==505){
			cout<<"Nicaragua"<<endl;
	}	
		system("pause");*/
		
		int codigo=0;
		cout<<"Ingrese codigo de area:";
		cin>>codigo;
		switch(codigo){
				case 501:
				cout<<"Belice"<<endl;
				break;
			case 502:
				cout<<"Guatemala"<<endl;
				break;
			case 503:
				cout<<"El salvador"<<endl;
				break;
			case 504:
				cout<<"Honduras"<<endl;
				break;
			case 505:
				cout<<"Nicaragua"<<endl;
				break;
			case 506:
				cout<<"Costa rica"<<endl;
				break;
			case 507:
				cout<<"Panama"<<endl;
				break;
				default:
					cout<<"este codigo no es de centroamerica"<<endl;
		}
		
		
		
		

}
