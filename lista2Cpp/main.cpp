#include <iostream>
#include <list>
#include <iterator>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void showList(list<int> g){
	//metodo para o acesso e exibicao de lista
	list<int>::iterator it;
	for(it=g.begin();it != g.end();++it){
		cout<<'\t'<<*it; //aqui o ponteiro do iterator é obrigatorio
	}
	cout<<'\n';
}

int main(int argc, char** argv) {
	//declarando as variaveis de lista
	list<int> gqlist1,gqlist2;
	
	//populando a lista
	for(int i = 0; i<=10;++i){
		gqlist1.push_back(i*2);
		gqlist2.push_back(i*3);
	}
	
	//exibindo os elementos da lista
	cout<<"\n List 1 (gqlist1) is: ";
	showList(gqlist1);
	
	cout<<"\n List 2 (gqlist2) is: ";
	showList(gqlist2);
	
	//tirando o primeiro item da lista
	cout<<"\ngqlist1.pop_front(): ";
	gqlist1.pop_front();		
	showList(gqlist1);
	
	//tirando o ultimo elemento da lista
	cout<<"\ngqlist2.pop_back(): ";
	gqlist2.pop_back();		
	showList(gqlist2);
	
	//invertendo os elementos da lista
	cout<<"\ngqlist1.reverse(): ";
	gqlist1.reverse();
	showList(gqlist1);
	
	//ordernando os elementos da lista
	cout<<"\ngqlist2.sort(): ";
	gqlist1.sort();
	showList(gqlist2);
	
	system("pause");
	return 0;
}

