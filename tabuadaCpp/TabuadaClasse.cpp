#include <iostream>

using namespace std;

//essa � a classe que foi criada
class Tabuada{
	//declarando uma variavel privada(s� � acessada na propria classe)
	private:
		int total;
		
	public:
		//aqui aonde o calculo acontece
		void calculoTabuada(int entrada){
			for(int i = 1; i <= 10; i++){
				total = 0;
				total = entrada * i;
				cout << entrada << "x" << i << "=" << total<<"\n"; //eu usei o operador de composi��o para exibir o resultado
			}			
		}
};
