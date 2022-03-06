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
	cout <<"---------------------------------------------------------------------"<<endl;
  
  cout <<"DIGITA LOS NUMEROS QUE DESEAS"<<endl;
	 int nn1, impares= 0, parares = 0, sumPares = 0, sumImparre = 0, sumaPar1 = 0, sumampar11 = 0, par11 = 0;


    for (int i = 0 ; i < 10; i++)
    {
        cout << "(" << i + 1 << "/10): ";
        cin >> nn1;


        if (nn1 % 2 == 0)
        {
           sumImparre += nn1;
            impares++;
        }
        else
            sumPares+= nn1;


        if (nn1 % 2 == 0)
        {
            sumaPar1 += nn1;
            par11++;
        }
      else
            sumImparre += nn1;

      }

    cout << "\nLA SUMATORIA DE LOS NUMEROS IMPARES ES : " <<sumPares << endl;
    cout <<"---------------------------------------------------------------------"<<endl;
    cout << "\nLA SUMA DE LOS NUMEROS PARES ES : " << sumImparre << endl;
    cout <<"---------------------------------------------------------------------"<<endl;
	cout << "EL PROMEDIO DE LOS NUMEROS PARES: " << float(sumampar11/impares) << endl;
	cout <<"---------------------------------------------------------------------"<<endl;
    cout << "\nLOS NUMEROS PARES SON: " << par11 << endl;

cout <<"---------------------------------------------------------------------"<<endl;
int num;
	cout<< "ESCOGE UN DiA DE LA SEMANA POR FAVOR:";
	cin>> num;
	switch (num){
		case 1: cout<<"LUNES: TIENES QUE TRANAJAR ";
		break;
		system("pause");

		case 2: cout<<"MARTES: TIENES QUE TRANAJAR ";
		break;
		system("pause");

		case 3: cout<<"MIERCOLES: TIENES DESCANSO  ";
		break;
		system("pause");
		case 4: cout<<"JUEVES:  TIENES QUE TRANAJAR ";
		break;
		system("pause");
		case 5: cout<<"VIERNES:  TIENES QUE TRANAJAR ";
		break;
		system("pause");
		case 6: cout<<"SABADO:   TIENES DESCANSO ";
		break;
		system("pause");
			case 7: cout<<"DOMINGO:   TIENES QUE TRANAJAR ";
		break;
		system("pause");
		default : cout<<"Los dias de la semana llegan hasta 7";
		
	 
	 }
  return 0;	 

	}
