#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Desarrolle un programa que lea la entrada de un vector de enteros y determine el elemento mayor*/
using namespace std;
int main(int argc, char** argv) {
    int n,mayor=0;
	int arreglo[n];
	cout<<"Ingrese el tamaño del arreglo"<<endl;
	cin>>n;
	cout<<"Ingrese los elementos: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arreglo[i];
		if(arreglo[i]>mayor){
			mayor=arreglo[i];
		}
	}
	cout<<"el mayor es: "<<mayor<<endl;	
	
	return 0;
}
