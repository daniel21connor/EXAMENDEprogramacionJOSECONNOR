#include<iostream>
#include<stdlib.h>
#include <math.h>
#include<conio.h>
#include <string.h>
using namespace std;
int main( ){
 string usuario;
	string contrasena;
	int estatus =0, can_intentos=0;
do{

	cout << " \nusuario:\n ";
	cin>> usuario;
	cout<<"\n contrasena:\n";
	cin>> contrasena;
	if (contrasena!="123456")
	{can_intentos++;
		cout << "\n contrasena incorrecta";
			cout << "\n TE QUEDAN POCOS INTENTOS";
	}
	
	else 
	estatus=1;
	}while(can_intentos<3&&estatus==0);
	if (estatus==1){
		cout<<"\n BIENVENIDO AL BANCO";
	}
	else { cout<< "\n HAS SUPERADO LA CANTIAD DE INTENTOS";
	 return 0;	 
	}
	cout <<"---------------------------------------------------------------------"<<endl;
	int numero, x=1;
	cout<<"\nEscribe el numero que quieres factorial: ";	
	cin>>numero;

	for(int i=1; i<=numero;i++){
		x = x * i;
		
	}
	cout<<"\nE1 EL factorial de este numero es: " <<x<<endl;
	
	system ("pause"); 
	
	cout <<"---------------------------------------------------------------------"<<endl;
	
		int numere;

		cout<<"ESCRIBE EL NUMERO QUE DESEAS MULTIPLICAR: ";
		cin>>numere;	
		for(int i=1;i<=20;i++){ 
		cout<<numere<<" * "<<i<<"="<<numere*i<<endl;
		}
		
		system("pause");
	}
