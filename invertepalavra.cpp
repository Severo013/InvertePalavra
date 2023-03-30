#include <iostream>
#include <string>
using namespace std;


//Programa que recebe uma string e a inverte
//Exemplo: Gabriel -> leirbaG
int main(){
	
	//declaracao da variavel tipo string nomeada palavra
	string palavra;
	cout<< "Digite a palavra desejada: "; //campo para o usuario inserir a palavra
	getline(cin, palavra); //obtendo o valor inserido pelo usuario
	cout<<"Palavra invertida: "; 
	for (int i = palavra.size()-1; i >=0; i--){
		cout<<palavra[i];
	} //essa funcao faz com que, a palavra que é um vetor, seja escrita de trás para frente, letra por letra
	cout<<"\n";
	system("pause");
	return 0;
}
