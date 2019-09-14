#include "Recursividad.h"
#include <string>
using std::string;

Recursividad::Recursividad()
{

}
int Recursividad::Fibonacci(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	else
	{
		return Fibonacci(num - 1) + Fibonacci(num - 2);
	}
}

int Recursividad::Factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return Factorial(n - 1) * n;
	}
}

int Recursividad::Multiplicacion_Recursiva(int n, int m)
{
	if ((m == 0) || (n == 0))
	{
		return 0;
	}
	else
	{
		return n + Multiplicacion_Recursiva(n, m - 1);
	}

}

int Recursividad::Multiplicacion_Iterativa(int n, int m)
{
	int res = 0;
	for (int i = 0; i < m; i++)
	{
		res += n;
	}
	return res;
}

int Recursividad::Base_A_Decimal(int n, System::String^ base)
{
	

	return 0;
}

System::String^ Recursividad::Binario(int numero, System::String^ res)
{

	if (numero < 2)
	{
		res += System::Convert::ToString(numero);
		return res;
	}
	else
	{
		
		res += System::Convert::ToString(numero % 2 + (10 * System::Convert::ToInt32(Binario(numero/2, res))));
		return res;
	}


}