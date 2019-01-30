#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class Calculos{
	//nivel de acesso
	public:
		//declarações das variaveis
		double numero1,numero2,total;
		
		//metodos
		double Soma(){
			total = numero1+numero2;
			return total;
		}
};

int main(int argc, char** argv) {
	
	Calculos soma;
	
	cout<<"Coloque o primeiro numero: ";
	cin>> soma.numero1;
	
	cout<<"Coloque o segundo numero: ";
	cin>> soma.numero2;
	
	cout<<"Resultado e: "<<soma.Soma() <<"\n\n";
	
	system("pause");
	
	return 0;
}
