//Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é
//chamada passando duas variáveis A e B por exemplo e, após a execução da função, A conterão valor de B e B terá o valor de A.

#include <iostream>
using namespace std;

	// Função para trocar os valores de duas variáveis
	void trocar_valores(int &a, int &b) {
		int temp;
		temp = b;
		b = a;
		a = temp;
	}

	
	int main() {
	    int num1, num2;
	
	    
	    cout << "Digite o primeiro valor inteiro: ";
	    cin >> num1;
	
	    cout << "Digite o segundo valor inteiro: ";
	    cin >> num2;
	
	   
		    cout << "\nValores antes da troca:" << endl;
		    cout << "Valor 1: " << num1 << endl;
		    cout << "Valor 2: " << num2 << endl;
	
	  
	    trocar_valores(num1, num2);
	
	    
		    cout << "\nValores apos a troca:" << endl;
		    cout << "Valor 1: " << num1 << endl;
		    cout << "Valor 2: " << num2 << endl;
	
	    return 0;
}

