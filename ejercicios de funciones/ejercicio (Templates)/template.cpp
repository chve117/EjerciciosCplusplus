#include <iostream>
#include <conio.h>

using namespace std;
// utiliza plantillas para ejemplos
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//prototipo de función

template <class D>
void mostrarAbs(D numero);

int main(int argc, char** argv) {
	int num1= -4;
	float num2=-56.67;
	double num3=-123.45;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	return 0;
}

template <class D>
void mostrarAbs(D numero){
	if(numero<0){
		numero = numero *-1;
	}
	cout<<"El valor absoluto del numero es:"<<numero<<endl;
}
