#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void histograma(int n);
int lanzarDado();
int main()
{
    srand(time(NULL));
    int dado, caras[12]={0}; //En 1 siempre va a ser 0 ya que son 2 dados los que se lanzan
    for(int x=1;x<101;x++)
    {
        dado=lanzarDado()+lanzarDado(); //dos lanzamientos se suman
            caras[dado-1]++; //para que no se repita el 0 en la casilla 2 del vector "caras"
    }
    for(int x=0;x<12;x++)
    {
        cout<<"Puntos en los dados ";histograma(x+1); //11+1=12 que son los puntos maximos al lanzar 2 dados
        cout<<"Veces que cayeron esos puntos en los dados --> "; //la suma de todas las "veces que cayeron" debe ser 100
        cout<<caras[x]<<endl<<endl; 
    }
    return 0;
}
void histograma(int n)
{
    for(int i=1 ; i<=n; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
int lanzarDado()
{
     int dado=0;
     dado=1+rand()%6;
     return dado;
}
