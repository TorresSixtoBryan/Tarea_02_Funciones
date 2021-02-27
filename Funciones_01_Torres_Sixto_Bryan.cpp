// 	Programa que utiliza funciones para realizar la suma de dos números enteros ingresados por el usiario

#include <cmath>
#include <iostream>
#include <windows.h>

using std::cin;
using std::cout;
using std::endl;

float Suma(float D1, float D2);

int main()
{
	float N1=0, N2=0, Resultado=0;
	
	cout<<"Este programa sirve para realizar la suma de dos numeros ingresados por el usuario.\n"<<endl;
	cout<<"Ingresa el primer numero: ";
	cin>>N1;
	cout<<"Ingresa el segundo numero: ";
	cin>>N2;
	Resultado=Suma(N1,N2);
	Sleep(1500);
	cout<<"\nLa suma de N1: "<<N1<<" y N2: "<<N2<<" es igual a: "<<Resultado<<endl;
}

float Suma(float D1, float D2)
{
	float Res=0;
	
	Res=D1+D2;
	
	return (Res);
}
