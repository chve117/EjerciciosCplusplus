#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Desarrolle un programa que lea de la entrada estandar un vector de enteros y determine el mayor elemento del vector
int main(int argc, char** argv) {
	int array[100];
	int mayor,menor,opcion,numero;
	cout<<"ingrese la opcion"<<endl;cin>>opcion;
	switch(opcion){
	case 1:
	cout<<"ingrese la cantidad de elementos en el vector: "<<endl;cin>>numero;
	for(int i=0; i<numero;i++){
		cout<<i+1<<". indique los elementos a ingresar: "<<endl;cin>>array[i];
		if(array[i]>mayor){
			mayor=array[i];
		}	
	}
	cout<<"el mayor numero es: "<<mayor<<endl;
	break;
	
	case 2:
		cout<<"ingrese la cantidad de elementos en el vector: "<<endl;cin>>numero;
		for(int i=0; i<numero;i++){
		cout<<i+1<<". indique los elementos a ingresar: "<<endl;cin>>array[i];
		if(array[i] < menor){
			menor=array[i];
			
		}	
	}
	cout<<"el menor numero es: "<<menor<<endl;
	break;
 }
	return 0;
}
