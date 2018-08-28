using namespace std;
#include<iostream>
#include<conio.h>
main()
{
	int num1, num2, div, distancia, dias;
	float costo;
	
	char op;
	cout<<"EJERCICIOS CON IF & SWITCH\n";
	cout<<"\n[M]ultiplos [S]eparar digitos [P]recio de boletos\n";op=getch();
	switch(op)
	{    //Escriba un programa que lea dos enteros y determine si el primero es un múltiplo del segundo
		case 'M': case 'm':          
			cout<<"Ingresa el primer numero: ";
			cin>>num1;
			cout<<"Ingresa el segundo numero: ";
			cin>>num2;
			if(num1 % num2 == 0){
				cout<<"El numero "<<num1<<" es multiplo de "<<num2;
			}
			else{
				cout<<"El numero "<<num1<<" no es multiplo de "<<num2;
			}
			break;
			
			//Escriba un programa que como entrada acepte 5 numeros y los separe en 3 espacios
			case 'S': case 's':
			cout<<"Ingresa un numero de cinco digitos: ";
			cin>>num1;
			div=num1/10000;
			cout<<div<<"   ";
			div=num1/1000 % 10;
			cout<<div<<"   ";
			div=num1/100 % 10;
			cout<<div<<"   ";
			div=num1/10 % 10;
			cout<<div<<"   ";
			div=num1 % 10;
			cout<<div; 
			break;
			
			//Escriba un programa que calcule el precio del boleto de ida y vuelta en ferrocarriles
			case 'P': case 'p':
			cout<<"Ingresa la distancia: ";
			cin>>distancia;
			cout<<"Ingresa los dias de estancia: ";
			cin>>dias;
			if (((distancia * 2) > 800) && (dias > 7)){
			    costo = distancia * 2 * 0.17 * 0.70;       //100-30= .70
			}
			else{
				costo = distancia * 2 * 0.17;
		    }
			cout<<"El costo total es: $"<<costo;
			
			break;
			default:
				cout<<"opcion no valida";
			return 0;
	}
	
}
