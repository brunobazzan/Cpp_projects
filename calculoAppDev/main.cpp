#include <iostream>


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class calculos{
public:
	double numero1;
	double numero2; 
	double total;
};


int main(int argc, char** argv) {

while(true){
	
	
	string escolhaStr = "";
	calculos soma;
	calculos subtracao;
	calculos multiplicacao;
	calculos divisao;
	
	cout<<"\n\n 1) Para Soma \n 2) Para subtracao \n 3) Para multiplicacao \n 4) Para divisao \n 5) Para Sair.\n";
	
	cin>> escolhaStr;
	
	if(escolhaStr == "1"){
		
		cout<< "Coloque o primeiro numero: ";
		cin>> soma.numero1;
		
		cout<< "Coloque o segundo numero: ";
		cin>> soma.numero2;
		
		soma.total = soma.numero1 + soma.numero2;
		
		cout<<"Seu resultado e: "<< soma.total;
	    getchar();
	}
	
	if(escolhaStr == "2"){
		
		cout<< "Coloque o primeiro numero: ";
		cin>> subtracao.numero1;
		
		cout<< "Coloque o segundo numero: ";
		cin>> subtracao.numero2;
		
		subtracao.total = subtracao.numero1 - subtracao.numero2;
		
		cout<<"Seu resultado e: "<< subtracao.total;
	    getchar();
	}
	if(escolhaStr == "3"){
		
		cout<< "Coloque o primeiro numero: ";
		cin>> multiplicacao.numero1;
		
		cout<< "Coloque o segundo numero: ";
		cin>> multiplicacao.numero2;
		
		multiplicacao.total = multiplicacao.numero1 * multiplicacao.numero2;
		
		cout<<"Seu resultado e: "<< multiplicacao.total;
	    getchar();
	}
	if(escolhaStr == "4"){
		
		cout<< "Coloque o primeiro numero: ";
		cin>> divisao.numero1;
		
		cout<< "Coloque o segundo numero: ";
		cin>> divisao.numero2;
		
		divisao.total = divisao.numero1 - divisao.numero2;
		
		cout<<"Seu resultado e: "<< divisao.total;
	    getchar();
	}
	if(escolhaStr == "5"){
		break;
	}
	if(escolhaStr != "1" && escolhaStr != "2" && escolhaStr != "3"&& escolhaStr != "4"&& escolhaStr != "5"){
		cout<<"Opcao invalida. Escolha uma das opcoes acima.";
		getchar();
	}
}
	return 0;
}
