#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Escribe un programa que lea dos secuencias de  enteros cada una y determine si cada elemento de la primera secuencia es mayor que el elemento respectivo de la otra secuencia.
using namespace std;
int main(int argc, char** argv) {
	int vect1[100], vect2[100];
	int elementos1;
	int compare=1;
	cout<<"Ingrese la cantidad de elementos de los vectores: "<<endl;cin>>elementos1;
	//Recepcion de elementos en array en el vector 1
	for(int i=0;i<elementos1;i++){
		cout<<"Ingrese los elementos del vector 1: "<<endl;
		cin>>vect1[i];
	}
	//Recepcion de elementos vector 2
	for(int i=0;i<elementos1;i++){
		cout<<"Ingrese los elementos del vector 2: "<<endl;
		cin>>vect2[i];
	}
	//COMPARACION DE ELEMENTOS
	for(int i=0;i<elementos1;i++){
		if(vect1[i]>vect2[i]){
			compare=1;
		}else if(vect1[i]<=vect2[i]){
			compare=0;
			break;
		}
	}
	return 0;
}
