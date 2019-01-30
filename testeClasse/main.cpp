#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class somaCalculo{
	public:
		//declarando as variaveis
		double numero1;
	    double numero2;
	    somaCalculo(double,double);
	    
	    //metodo
	    double total() {return numero1 + numero2;}
};

//equivale ao {get;set;}
somaCalculo::somaCalculo(double a, double b){
	numero1 = a;
	numero2 = b;
}

int main(int argc, char** argv) {
	
	double num1, num2;
	
	cout<<"Digite o primeiro numero: ";
	cin>> num1;
	
	cout<<"Digite o segundo numero: ";
	cin>>num2;
	
	//criando uma instancia e colocando os valores de entrada para o metodo
	somaCalculo Soma(num1,num2);
	
	cout<<"Valor e: "<< Soma.total()<<"\n";
	
	//pausando a aplicação  após fazer o calculo
	system("pause");
    return 0;	
}
