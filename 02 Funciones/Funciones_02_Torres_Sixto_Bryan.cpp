//	Programa que recibe dos números ingresados por el usuario e indica cuál de ellos es mayor

#include <iostream>
#include <windows.h>

using std::cin;
using std::cout;
using std::endl;

void Mayque(float D[2]);

int main()
{
	float N[2];
	
	cout<<"\nPrograma que recibe dos numeros del usuario y muestra cual de los dos es mayor.\n"<<endl;
	cout<<"Ingrese el primer numero:\t";
	cin>>N[0];
	cout<<"Ingrese el segundo numero:\t";
	cin>>N[1];
	Sleep(1000);
	Mayque(N);
}

void Mayque(float D[2])
{
	if (D[0]>D[1])
	{
		cout<<"\nN1: "<<D[0]<<" es mayor que N2: "<<D[1]<<endl;
	}
	else if (D[1]>D[0])
	{
		cout<<"\nN2: "<<D[1]<<" es mayor que N1: "<<D[0]<<endl;	
	}
	else
	{
		cout<<"\nAmbos numeros N1: "<<D[0]<<" y N2: "<<D[1]<<" son iguales"<<endl;	
	}
}
