//Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.

#include <iostream>
#include <string>

using namespace std;

struct Pessoa{
	
    string nome;
    string endereco;
    int idade;
};
    
    int main(){
	
    	Pessoa pessoa;

	    // Lendo os dados da pessoa
	    cout << "Digite o nome: ";
	    cin >> pessoa.nome;
	
	    cout << "Digite a idade: ";
	    cin >> pessoa.idade;
	   
	
	    cout << "Digite o endereco: ";
	     cin >> pessoa.endereco;
	
	    // Exibindo os dados da pessoa
	    cout << "\nExibindo os dados:" << endl;
	    cout << "Nome: " << pessoa.nome << endl;
	    cout << "Idade: " << pessoa.idade << endl;
	    cout << "Endereco: " << pessoa.endereco << endl;
	
	    return 0;
}