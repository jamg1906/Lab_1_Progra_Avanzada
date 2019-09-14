#pragma once
#include <string>
using std::string;

ref class Recursividad
{
public:
	Recursividad();
public:
	int Fibonacci(int num);
public:
	int Factorial(int n);
public:
	System::String^ Binario(int numero, System::String^ res);
public:
	int Multiplicacion_Recursiva(int n, int m);
public:
	int Multiplicacion_Iterativa(int n, int m);
public:
	int Base_A_Decimal(int n, System::String^ base);
};

