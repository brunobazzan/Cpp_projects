#include <iostream>

using namespace std;

class TabuadaClasse{
	private:
		int total;
	public:
		void CalculaTabuada(int varEntrada){
			int x;
			int parada;
			
			x = varEntrada;
			parada = x + 10;
			
			for(int x; x <= parada ; x++){
			
			for(int y = 1; y<= 11;y++){
				total = 0;
				total = x * y;
				if(y <=  10){
					cout<< x << "x" << y << "=" << total<<"\n";
				}
				else{
					cout<<"\n";
				}
			}
		}
	}
};
