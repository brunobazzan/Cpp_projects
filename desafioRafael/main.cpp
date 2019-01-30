#include <iostream>
#include "Tabuada.cpp"
/* Desafio: crie um programa que seja imputado um valor esta deve exibir a tabiada do valor imputado e dos proximos 10, ao final de cada tabuada o programa deve pular uma linha*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	TabuadaClasse clTabuada;
	int numReceptor;
	
	cout<<"Coloque o numero para fazer a tabuada: ";
	cin>> numReceptor;
	
	clTabuada.CalculaTabuada(numReceptor);
	
	system("pause");
	return 0;
}
