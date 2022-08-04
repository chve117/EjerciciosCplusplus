#include <iostream>
#include <conio.h>
/*Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int arreglo[20];
	int n,multi=1,guardar;
	cout<<"cuantos elementos tendra el arreglo: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"ingrese los elementos: "<<endl;
		cin>>arreglo[i];
	}
	
    for(int i=0;i<n;i++){
		multi=multi*arreglo[i];
	}
	cout<<"la multiplicacion del arreglo es: "<<multi;
	getch();
	return 0;
}
