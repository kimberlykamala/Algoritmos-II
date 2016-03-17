// matrices con objetos.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Matrices.h"
#include "Interfaz.h"
#include <iostream>

using namespace std;
const int n1=10;
const int m1=10;
int main()
{
    Interfaz Entrada_salida;
	float A[n][m], B[n][m], C[n][m];
	int tamaño_fila_A, tamaño_fila_B, tamaño_fila_C;
	int tamaño_columna_A, tamaño_columna_B, tamaño_columna_c;
	Matrices Ma1, Ma2, Ma3;

	int opcion;
	Entrada_salida.Leer(A,tamaño_fila_A,tamaño_columna_A);
	Ma1.Guardar_matrices_a_objetos(A,tamaño_fila_A,tamaño_columna_A);

	Entrada_salida.Leer(B,tamaño_fila_B,tamaño_columna_B);
	Ma2.Guardar_matrices_a_objetos(B,tamaño_fila_B,tamaño_columna_B);
	
	opcion=Entrada_salida.Menu();
	while((opcion>0)&&(opcion<8))
	{
		switch(opcion)
		{
		case 1:
				Ma1.Devolver_matrices_a_objetos(A,tamaño_fila_A,tamaño_columna_A);
				Entrada_salida.Escribir(A,tamaño_fila_A,tamaño_columna_A);

				Ma2.Devolver_matrices_a_objetos(A,tamaño_fila_A,tamaño_columna_A);
				Entrada_salida.Escribir(B,tamaño_fila_B,tamaño_columna_B);

				Ma3.Sumar(Ma1,Ma2);
				Ma3.Devolver_matrices_a_objetos(B,tamaño_fila_B,tamaño_columna_B);
				Entrada_salida.Escribir(B,tamaño_fila_B,tamaño_columna_B);
			break;
		case 2:
			break;
		case 3: 
			break;
		case 4:
			break;
		case 5:
			break;
		}

	}

	getchar();
	getchar();
	return 0;

}
