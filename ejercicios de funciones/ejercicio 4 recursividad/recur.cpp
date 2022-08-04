#include <iostream>
//Hacer un programa en C++ que use una función recursiva para calcular la potencia de un número.
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int potencia(long long, long long);

int main(int argc, char** argv) {
	long long base=0, exponente=0;
	
	cout<<"ingrese la base: "<<endl;cin>>base;
	cout<<"ingrese la exponente: "<<endl;cin>>exponente;
	cout<<"El resultado es: "<<potencia(base,exponente)<<endl;
	return 0;
}

int potencia(long long x, long long y){
	long long total;
	if(y!=1){
		total= x*potencia(x,y-1);
		return total;
	}else{
		return x;
	}
	
}
