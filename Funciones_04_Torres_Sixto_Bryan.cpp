//	Programa que recibe tres numeros del usuario y muestra cual de todos es el mayor.

#include <iostream>
#include <windows.h>

using std::cin;
using std::cout;
using std::endl;

float Mayque(float D1, float D2);

int main()
{
	float N[3],M;
	int i;
	
	cout<<"\nPrograma que recibe tres numeros del usuario y muestra cual de todos es el mayor.\n"<<endl;
	
	for(i=0;i<3;i++)
	{
		cout<<"Ingrese el numero "<<i+1<<" :\t";
		cin>>N[i];
	}
	Sleep(1000);
	M=Mayque(Mayque(N[0],N[1]),N[2]);	
	cout<<"\nEl numero mayor es: "<<M<<endl;
}

float Mayque(float D1, float D2)
{
	float x;
	
	if (D1>D2)
	{
		x=D1;
	}
	else
	{
		x=D2;
	}
	return x;
}
