#include "Calculos.cpp" //aqui aonde eu chamo o arquivo com os metodos que criei.
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	//aqui eu chamo a classe que necessito. Nesse caso eu chamo os metodos no switch case
	CalculosClasse Calculos;
	int decisao;
	
	//aqui eu declaro as variaveis para receber os valores do usuario.
	double numero1; double numero2;
	
	while (true){	
		numero1 = 0;
		numero2 = 0;
		decisao = 0;
		//aqui vou criando o menu principal aonde o usuario pode escolher
		cout<<"1. Para Soma \n2. Para Subtracao \n3. Para Multiplicacao \n4. Para Divisao \n5. Para Sair \n";
		
		//aqui aonde eu guardo a decisao do usuario que escolher
		cin>>decisao;
		
		//nessa estrutura vamos processar as decisoes que o cliente tomou
		switch (decisao){
			case 1:
				cout<<"Coloque seu primeiro numero: ";
			    cin>>numero1;
			
			    cout<<"Coloque seu segundo numero: ";
			    cin>>numero2;
			
				cout<<"O resultado e: "<< Calculos.Soma(numero1,numero2) << "\n\n"; //aqui eu chamo o metodo do aquivo
				break;
				
			case 2:
				cout<<"Coloque seu primeiro numero: ";
			    cin>>numero1;
			
			    cout<<"Coloque seu segundo numero: ";
			    cin>>numero2;
			    
			    cout<<"O resultado e: "<< Calculos.Subtracao(numero1,numero2) << "\n\n";
				break;
				
			case 3:
				cout<<"Coloque seu primeiro numero: ";
			    cin>>numero1;
			
			    cout<<"Coloque seu segundo numero: ";
			    cin>>numero2;
			    
			    cout<<"O resultado e: "<< Calculos.Multiplicacao(numero1,numero2) << "\n\n";
				break;
				
			case 4:
				cout<<"Coloque seu primeiro numero: ";
			    cin>>numero1;
			
			    cout<<"Coloque seu segundo numero: ";
			    cin>>numero2;
			    
			    cout<<"O resultado e: "<< Calculos.Divisao(numero1,numero2) << "\n\n";
				break;
				
			case 5:
				//caso o cliente deseja sair da aplicacao
				system("exit");
				break;
				
			default:
				cout<<"Opcao invalida !\n\n"; //quando sair fora das opcoes vou colocar a opcao invalida
				break;
		}
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}
