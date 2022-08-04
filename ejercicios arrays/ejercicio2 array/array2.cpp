#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Escriba un programa que indique un vector de numeros y su multiplicacion
int main(int argc, char** argv) {
	int vector[]={1,2,3,4,5};
	int multiplicacion=1;
	for(int i=0; i<5;i++){
		multiplicacion= multiplicacion*vector[i];
		cout<<"el resultado del arreglo es: "<<i<<endl;
	}
	cout<<"el resultado de la multiplicacion: "<<multiplicacion;
	return 0;
}
