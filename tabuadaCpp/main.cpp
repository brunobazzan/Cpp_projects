#include <iostream>
#include "TabuadaClasse.cpp" //chamando o arquivo que criei com os calculos da tabuada

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	Tabuada tabuadaNumero; //instanciando a classe que vou chamar pra fazer tabuada
	int numeroTabuada; //declarando um inteiro de entrada de usuario
	cout<<"Entre com numero para fazer a tabuada: ";
	cin>> numeroTabuada; //capturando o numero que ele vai colocar
	
	tabuadaNumero.calculoTabuada(numeroTabuada); //chamando o metodo pra fazer a tabuada
	
	system("pause");
	return 0;
}
