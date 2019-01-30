#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	//declaranda a variavel normal
	int y = 15;
	//declarando a variavel ponteiro
	int *i;
	
	//acessando a memoria da variavel y
	i = &y;
	//colocando o valor da variavel ponteirada
	cout<<"Valor: "<<*i<<"\n";
	//colocando o endereço de memoria 
	cout<<"Endereco de memoria: "<<&i<<"\n";
	system("pause");
	return 0;
}
