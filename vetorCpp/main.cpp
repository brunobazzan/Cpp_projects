#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	//declaramos uma variavel de vetor int vetor[tamanho]
	int i,vetor[5], y;
	
	string vetorStr[5];
	
	//agora vamos colocar os valores do vetor sempre se inicia do 0(zero)	
	for(i = 0;i<=4;i++){
		cout<<"Digite 0 " << i+1<< "o. Numero: ";
		cin>>vetor[i];
		//limpa tela
		system("cls");
	}
	
	//acessando os valores do vetor criado usando o comando for
	for(i = 0;i<=4;i++){
		cout<<"Posicao: "<<i<<" vetor [" <<i<<"] e "<<vetor[i]<<"\n";
	}
	//acessando uma posição do vetor individualmente
	cout<<"Posicao 2: " <<vetor[2]<<"\n\n";
	
	cout<<"\n____________________________________________________________\n";
	
	for(y=0; y<=4;y++ ){
		cout<<"Digite o nome do "<<y<< " amigo.";
		cin>>vetorStr[y];
		//limpa tela
		system("cls");				
	}
	
	for(y=0; y<=4;y++ ){
		cout<<"Seus amigos sao: " << vetorStr[y]<<"\n\n";		
	}
	system("pause");
	return 0;
}
