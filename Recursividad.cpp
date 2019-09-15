#include "Recursividad.h"
#include <string>
#include <cmath>
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
	try
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
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("Error");
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

int Recursividad::Base_A_Decimal(int n, int base)
{
	int num = 0;
	switch (base)
	{
	case 10:
		num = n;
		break;	
	default:
		System::String ^ numero_vector = System::Convert::ToString(n);
		int largo = numero_vector->Length;
		int c = 0;
		for (int i = largo-1; i >= 0; i--)
		{
			num += System::Convert::ToInt32(System::Convert::ToString(numero_vector[i])) * (pow(base, c));
			c++;
		}
		System::Windows::Forms::MessageBox::Show("El número en sistema decimal es " + System::Convert::ToString(num));
		break;
	}
	return num;
}

int Recursividad::Decimal_A_Base(int n, int base_destino)
{
	int sobrante = 0;
	int seguir = 0; 
	int original = n;
	System::String^ res = "";
	do
	{
		n = n / base_destino;
		sobrante = original - (n * base_destino);
		original = n;
		if (n == 0)
		{
			res += System::Convert::ToString(sobrante);
			seguir = 1;
		}
		else
		{
			res += System::Convert::ToString(sobrante);
		}
	} while (seguir == 0);
	System::String^ resres = "";
	int largo = res->Length;
	for (int i = largo - 1; i > -1; i--)
	{
		
	}
	System::Windows::Forms::MessageBox::Show(res);
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