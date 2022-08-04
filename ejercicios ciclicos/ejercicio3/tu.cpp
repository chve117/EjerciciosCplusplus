#include <iostream>
#include <math.h>
using namespace std;

/*Hacer un programa en C++ que permita sumar la sucesión de los números 2^1+2^2+...+2^n, siendo n un número que se ingresa por medio del teclado.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long base, exponente,suma;
	cout<<"ingrese la base: "<<endl;cin>>base;
	cout<<"ingrese el exponente: "<<endl;cin>>exponente;
	
	for(long i=1;i<=exponente;i++){
		suma= pow(base,i);
		cout<<"el exponente: \n"<<i<<endl;
		cout<<"el valor es: \n"<<suma<<endl;
}
	return 0;
}
