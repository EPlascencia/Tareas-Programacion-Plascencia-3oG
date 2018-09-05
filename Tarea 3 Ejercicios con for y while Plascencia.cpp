using namespace std;
#include<iostream>
#include<conio.h>
main()
{
	int i=0, factorial=1, num, potencia, potenfinal=1,  pobA, pobB, pobA1, pobB1 ;
	
	char sw;
	cout<<"EJERCICIOS CON FOR, WHILE\n";
	cout<<"Presiona la letra del ejercicio al que quieras entrar\n";
	cout<<"\n[F]actorial [E]levar a una potencia [P]oblacion entre dos paises\n";sw=getch();
	switch(sw)
	{    //Leer un numero y mostrar el factorial del numero
		case 'F': case 'f':          
			cout<<"Ingresa el numero: ";
			cin>>num;
			if(num>=0 && num<=19){
			
			for(i=1; i<=num; i++)
			factorial = factorial * i;
			cout<<"El factorial del numero "<<num<<"! es: "<<factorial;
			}else{
				cout<<"Este programa no muestra factoriales de numeros mayores a 19 ni menores a 0";
			}
			break;
			
			// Leer un numero base y una potencia y mediante ciclos obtener el resultado de elevar el numero base a la potencia indicada. 
			case 'E': case 'e':
			cout<<"Ingresa el numero el cual se quiere elevar: ";
			cin>>num;
			cout<<"Ingresa la potencia: ";
			cin>>potencia;
			for(i=1; i<=potencia; i++)
			{
				potenfinal= potenfinal * num;
			}
			cout<<"El resultado de "<<num<<" ^ "<<potencia<<" es: "<<potenfinal;
			
			break;
			
			case 'P': case 'p':
			// Realice un programa que permita dar como salida la población de dos países (a y b)
			cout<<"Ingresa la poblacion de A (TIENE QUE SER MENOR QUE B): ";
			cin>>pobA;
			cout<<"Ingresa la poblacion de B (TIENE QUE SER MAYOR QUE A): ";
			cin>>pobB;
			if(pobB<=pobA && pobA>=pobB)
			cout<<"/nERROR";
			else{
				while(pobA<=pobB)
				{
					pobA1=(pobA*6)/100;
					pobB1=(pobB * 3)/100;
					
					pobA=(pobA + pobA1);
					pobB=(pobB+pobB1);
					i++;
					cout<<"La poblacion de A"<<" en el a?o "<<i<<" es: "<<pobA<<endl;
					cout<<"La poblacion de B"<<" en el a?o "<<i<<" es: "<<pobB<<endl;
					
				}
				cout<<"\nEl tiempo que paso hasta que la poblacion de A fuera mayor que B fue: "<<i<<" a?os";
			}
			break;

			default:
				cout<<"opcion no valida";
			return 0;
	}
	
}
