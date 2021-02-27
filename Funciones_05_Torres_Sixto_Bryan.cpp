//	Programa que calcula el factorial de un numero dado por el usuario

#include <iostream>
#include <windows.h>

using std::cin;
using std::cout;
using std::endl;

int Factorial(int Num);

int main()
{
	int N;
	
	cout<<"\nPrograma que calcula el factorial de un numero ingresado por el ususario.\n"<<endl;
	cout<<"Ingrese el numero para el cual desea conocer el factorial: ";
	cin>>N;
	
	if (N>=1)
	{
		cout<<"El factorial de "<<N<<" es igual a: "<<Factorial(N)<<endl;
	}
	else
	{
		cout<<"El numero ingresado debe ser mayor o igual a 1."<<endl;
	}
}

int Factorial(int Num)
{
	int Res=1,i;
	
	for (i=1;i<=Num;i++)
	{
		Res*=i;
	}
	
	return Res;
}
