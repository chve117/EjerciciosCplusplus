#include <iostream>
//ingrese vector e imprimalo inverso
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int n=0;
	int arreglo[n];
	cout<<"cuantos elementos tendra el arreglo: "<<endl;
	cin>>n;//preguntamos por la cantidad de elementos
	cout << "Porfavor inserte un vector de tamano "<<n<<endl;//pedimos los elementos del vector
	for(int i=0;i<n;i++){//recorremos los elementos del vector y los guardamos en las posiciones
		cin>>arreglo[i];
	}
	
	for(int i=n-1;i>=0;i--){//empezamos a descender e imprimir las posiciones del vector
		cout<<arreglo[i];
	}
	return 0;
}
