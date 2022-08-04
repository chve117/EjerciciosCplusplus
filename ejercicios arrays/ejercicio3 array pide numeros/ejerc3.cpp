#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Escribe un programa que lea la entrada estandar de un vector de numeros y
//muestre en la salida estandar los numeros del vector con sus indices asociados.
int main(int argc, char** argv) {
	int n,numeros[100];
	cout<<"Indique la cantidad de numeros a leer: "<<endl;
    cin>>n;
	for(int i=0; i<n;i++){
		cout<<"indique el numero para el arreglo: "<<endl;
		cin>>numeros[i];
	}
	for(int i=0;i<n;i++){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	return 0;
}
