#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int decisao = 0;
	int decisaoBebida;
	int marcaBebida;
	int quantidade = 0;
	int quantidadeBebida;
	float total = 0.0;
	
	cout<<"Escolha sua pizza: \n \t 1) Mussarela: 35.00  \n \t 2) Portuguesa: 34.00 \n \t 3) Calabresa: 33.00 \n \t 4) Atum: 32.00 \n\n";
	cin>>decisao;
	
	 switch(decisao){
	 	case 1:
	 		cout<<"Seu pedido tem bebida? \n 1) Para sim \n 2) Para nao \n";
	 		cin>>decisaoBebida;
	 		//decisao de bebida
	 		switch(decisaoBebida){
	 			//decisao qual a bebida o cliente quer
	 			case 1:
	 				cout<<"Qual bebida voce deseja comprar? \n 1) Coca cola: 7.00 \n 2) Fanta: 6.00 \n 3) Suco:5.00 \n";
	 				cin>>marcaBebida;
	 				 //desicao de quantidade de pizzas e bebidas
	 				switch(marcaBebida){
	 					case 1:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 35) + (quantidadeBebida * 7));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
	 			       case 2:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 35) + (quantidadeBebida * 6));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
                       case 3:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 35) + (quantidadeBebida * 5));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
	 					default:
	 					cout<<"Opção invalida";
	 					break;
					 }
					 break;
				        case 2:
						    cout<<"Quantas pizzas pretende comprar? \n";
							cin>> quantidade;
	 						total  = ((quantidade * 35));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;		
				break;	 	 					
			 }
	 		break;
	 		
	case 2:
	 		cout<<"Seu pedido tem bebida? \n 1) Para sim \n 2) Para nao \n";
	 		cin>>decisaoBebida;
	 		//decisao de bebida
	 		switch(decisaoBebida){
	 			//decisao qual a bebida o cliente quer
	 			case 1:
	 				cout<<"Qual bebida voce deseja comprar? \n 1) Coca cola: 7.00 \n 2) Fanta: 6.00 \n 3) Suco:5.00 \n";
	 				cin>>marcaBebida;
	 				 //desicao de quantidade de pizzas e bebidas
	 				switch(marcaBebida){
	 					case 1:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 34) + (quantidadeBebida * 7));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
	 			       case 2:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 34) + (quantidadeBebida * 6));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
                       case 3:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 34) + (quantidadeBebida * 5));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
	 					default:
	 					cout<<"Opção invalida";
	 					break;
					 }
					 break;
				        case 2:
						    cout<<"Quantas pizzas pretende comprar? \n";
							cin>> quantidade;
	 						total  = ((quantidade * 34));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;		
				break;	 	 					
			 }
	 		break;
	case 3:
	 		cout<<"Seu pedido tem bebida? \n 1) Para sim \n 2) Para nao \n";
	 		cin>>decisaoBebida;
	 		//decisao de bebida
	 		switch(decisaoBebida){
	 			//decisao qual a bebida o cliente quer
	 			case 1:
	 				cout<<"Qual bebida voce deseja comprar? \n 1) Coca cola: 7.00 \n 2) Fanta: 6.00 \n 3) Suco:5.00 \n";
	 				cin>>marcaBebida;
	 				 //desicao de quantidade de pizzas e bebidas
	 				switch(marcaBebida){
	 					case 1:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 33) + (quantidadeBebida * 7));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
	 			       case 2:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 33) + (quantidadeBebida * 6));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
                       case 3:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 33) + (quantidadeBebida * 5));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
	 					default:
	 					cout<<"Opção invalida";
	 					break;
					 }
					 break;
				        case 2:
						    cout<<"Quantas pizzas pretende comprar? \n";
							cin>> quantidade;
	 						total  = ((quantidade * 33));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;		
				break;	 	 					
			 }
	 		break;
	 		
	case 4:
	 		cout<<"Seu pedido tem bebida? \n 1) Para sim \n 2) Para nao \n";
	 		cin>>decisaoBebida;
	 		//decisao de bebida
	 		switch(decisaoBebida){
	 			//decisao qual a bebida o cliente quer
	 			case 1:
	 				cout<<"Qual bebida voce deseja comprar? \n 1) Coca cola: 7.00 \n 2) Fanta: 6.00 \n 3) Suco:5.00 \n";
	 				cin>>marcaBebida;
	 				 //desicao de quantidade de pizzas e bebidas
	 				switch(marcaBebida){
	 					case 1:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 32) + (quantidadeBebida * 7));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
	 			       case 2:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 32) + (quantidadeBebida * 6));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
                       case 3:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 32) + (quantidadeBebida * 5));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
	 					default:
	 					cout<<"Opção invalida";
	 					break;
					 }
					 break;
				        case 2:
						    cout<<"Quantas pizzas pretende comprar? \n";
							cin>> quantidade;
	 						total  = ((quantidade * 32));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;		
				break;	 	 					
			 }
	 		break;
	case 5:
	 		cout<<"Seu pedido tem bebida? \n 1) Para sim \n 2) Para nao \n";
	 		cin>>decisaoBebida;
	 		//decisao de bebida
	 		switch(decisaoBebida){
	 			//decisao qual a bebida o cliente quer
	 			case 1:
	 				cout<<"Qual bebida voce deseja comprar? \n 1) Coca cola: 7.00 \n 2) Fanta: 6.00 \n 3) Suco:5.00 \n";
	 				cin>>marcaBebida;
	 				 //desicao de quantidade de pizzas e bebidas
	 				switch(marcaBebida){
	 					case 1:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 31) + (quantidadeBebida * 7));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
	 			       case 2:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 31) + (quantidadeBebida * 6));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
                       case 3:
	 						cout<<"Quantas pizzas pretende comprar? \n";
	 						cin>>quantidade;
	 						cout<<"Quantas bebidas ? \n";
	 						cin>>quantidadeBebida;
	 						total  = ((quantidade * 31) + (quantidadeBebida * 5));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;
	 					default:
	 					cout<<"Opção invalida";
	 					break;
					 }
					 break;
				        case 2:
						    cout<<"Quantas pizzas pretende comprar? \n";
							cin>> quantidade;
	 						total  = ((quantidade * 31));
	 						cout<<"Seu pedido Ficara em: " <<total<<" reais \n";
	 						break;		
				break;	 	 					
			 }
	 		break;
	 }
	system("pause") ;
	return 0;
}
