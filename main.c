/*
*
*prueba.cpp
* Creador por: Santiago23
*24/02/2017
*6:40:55 a.m.
*/
#include <iostream>

using namespace std;


int main()
{
	int a=1, b=1, c;
	cout<<"Ingrese un valor entero a sumar:";
	cin>>a;
	cout<<"Ingrese un valor entero a sumar:";
    cin>>b;
    while(a!=0 && b!=0)
    {
    	c=a+b;
    	a=c;
    	cout<<"Si desea terminar la suma, ingrese 0 \nTabmién puede continuar ingresando un valor entero a sumar:";
    	cin>>b;
    }
    cout<<"\nEl resultado es="<<a<<endl;

cout << "\nEste es un ejemplo sencillo del lenguaje de \nprogramación C++ en el IDE Eclipse"<<endl;
return 0;
} 
