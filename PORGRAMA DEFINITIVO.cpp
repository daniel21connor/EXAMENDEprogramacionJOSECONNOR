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
	}
