#include <iostream>
/*Escribe un programa que defina un vector de numeros y calcule la suma de sus elementos*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int arreglo[]={1,2,3,4,5};
	int suma;
	for(int i=0;i<5;i++){
		suma=suma+arreglo[i];// i guarda la posicion de los elementos del arreglo
	}
	cout<<"el resultado de la suma es:"<<suma<<endl;
	return 0;
}
