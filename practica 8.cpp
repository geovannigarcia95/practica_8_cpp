/*Practica 8: Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros,
  multiplique estos dos números y despliegue el resultado.*/
  

#include<iostream>

using namespace std;

float Mult(float a, float b);

int main()
{
	float a, b;
	
	cout << "Asigna el primer valor a : ";
	cin >> a;
	cout << "Asigna el segundo valor: ";
	cin >> b;
	
	cout << "Tu resultado es: " << Mult(a,b);
}

float Mult(float a, float b)
{
	float resultado;
	resultado = a*b;
	return resultado;
}

               // PRACTICA 8 YOSHIO GEOVANNI GARCIA LOPEZ
