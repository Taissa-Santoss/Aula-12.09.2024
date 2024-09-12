//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &).
//Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.

#include <iostream>
using namespace std;


int main() {
	
	int Valor1=45;
	float Valor2=25.3;
	char Caracter ='T';
	
	// armazena o endereço de idade
	int* ptrint = &Valor1;
	float* ptrfloat = &Valor2;
	char* ptrchar = &Caracter;
	
		// imprimir o valor da idade
		cout << "Valores antes da modificacao:" << endl;
		cout << "Numero Inteiro: " << Valor1 << endl;
		cout << "Numero Real: " << Valor2 << endl;
		cout << "Caracter: " << Caracter << endl;
		
		// Modificando os valores usando os ponteiros
	    *ptrint = 20;
	    *ptrfloat = 10.50;
	    *ptrchar = 'F';
	
	    // Exibindo os valores após a modificação
	    cout << "\nValores apos a modificacao:" << endl;
	    cout << "Numero Inteiro: " << Valor1 << endl;
	    cout << "Numero Real: " << Valor2 << endl;
	    cout << "Caracter: " << Caracter << endl;
		
		return 0;
}

