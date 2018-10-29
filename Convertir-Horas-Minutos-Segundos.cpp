#include<iostream>
#include<conio.h>
using namespace std;
void tiempoAsegundos(int&, int&, int&);
void SegundosAtiempo(int, int&, int&, int&);
int main()
{
    //Convertir Horas, minutos y segundos a SEGUNDOS
    int horas, minutos, segundos;
    cout<<"Convertir Horas, minutos y segundos a solamente segundos";
    cout<<"\ningrese las horas: ";
    cin>>horas;
    cout<<"ingrese los minutos: ";
    cin>>minutos;
    cout<<"ingrese los segundos: ";
    cin>>segundos;
    tiempoAsegundos(horas, minutos, segundos);
    cout<<"los segundos son: "<<segundos<<endl;
    //----------------------------------------------------------
    //Convertir SEGUNDOS a horas minutos y SEGUNDOS
    int hor, min, seg, totseg;
    cout<<"\nConvertir un total de Segundos a Horas, minutos y segundos";
    cout<<"\nIngrese los segundos: ";
    cin>>totseg;
    SegundosAtiempo(totseg, hor, min, seg);
    cout<<"Horas: "<<hor<<" ";
    cout<<"Minutos: "<<min<<" ";
    cout<<"Segundos: "<<seg<<" ";
    getch();
    return 0;
}
void tiempoAsegundos(int& horas, int& minutos, int& segundos)
{
    horas=horas * 3600;  //una hora tiene 3600 seg
    minutos=minutos * 60; //un minutos tiene 60 seg
    segundos=(horas+minutos+segundos);
}
void SegundosAtiempo(int totseg, int& hor, int& min, int& seg)
{
    hor=totseg / 3600;
    totseg %=3600;
    min=totseg/60;
    seg=totseg % 60;
}
