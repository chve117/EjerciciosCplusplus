#include <iostream>
//Leer 5 valores de un array de enteros y deducir cuál es la distancia que les separa del número mayor.
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int arreglo[5],mayor=0,distancia;
	cout<<"ingrese los elementos del arreglo: \n"<<endl;
	for(int i=0;i<5;i++){
		cin>>arreglo[i];
		if(arreglo[i]>mayor){
			mayor=arreglo[i];
		}
	}
	cout<<"El mayor elemento es: "<<mayor<<endl;
	for(int i=0;i<5;i++){
		distancia=mayor-arreglo[i];
		cout<<"Si la distancia es 0 el elemento es el mayor comparandose con si mismo"<<endl;
		cout<<"la distancia entre elemento: "<<arreglo[i]<<" y el mayor es: "<<mayor<<" la distancia es: "<<distancia<<endl;
	  }
	
	return 0;
}
