#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float f3 (int x);
void tab3(int max);

float f2 (int x, int y);
void tab2(int uno, int cinco);

float f1(int x);
void tab1(int max);
//FORMULA3
float f3 (int x)
{
    int x1;
    x1=2*(x*x*x);
    return x1;
}

void tab3(int max)
{
    for(int x=0; x<=max; x++)
    {
      cout<<"\nf("<<x<<")= "<<f3(x);
    }
}

//FORMULA2
float f2 (int x, int y)
{
    int f2;
    f2=(2*x*y)-(3*y);
    return f2;
}

void tab2 (int uno, int cinco)
{
    int x,y;
    for(x = 1; x<=5; x++)
    {
        for(y = 1; y<=5; y++)
        {
            cout<<"\nf("<<x<<" , "<<y<<")= "<<f2(x,y);
        }
    }
}

//FORMULA1
float f1(int x)
{
    float res,raiz;
    raiz=2*pow(x,2);
    res=(pow(raiz,.333))/(2*x-3);
    return res;
}
void tab1(int max)
{
    for (int x=0;x<=max;x++) 
    {
        cout<<"\nf("<<x<<")= "<<f1(x);
    }
}
main()
{   
    int op, max, x;   
    do
	{
	    system("cls");
	    cout<<"FORMULAS MATEMATICAS CON FUNCIONES\n";
	    
		cout<<"\n[1]Formula, [2]Formula, [3]Formula y [0]Salir";
		
		cout<<"\n\nCual Formula desea utilizar (1, 2 ,3 o 0 para salir)?: ";
		cin>>op;
		
		switch (op)
		{
			case 1:
			    cout<<"\nValor maximo: ";
         		cin>>max;
			    tab1(max);
			    getch();
				break;
			
			case 2:
				tab2(1,5);
			    getch();
				break;
			
			case 3:
			    cout<<"\nValor maximo: ";
         		cin>>max;
			    tab3(max);
			    getch();
			    break;
			
			case 0: 
			break;
			
			default:
			cout<<"\nOpcion no valida";
			getch();

		}
	}
		while(op!=0);
}
