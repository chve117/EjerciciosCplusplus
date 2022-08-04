#include <iostream>
#include <time.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int arreglo[100][100];
	int nuevo[100][100];
	int filas, columnas;
	srand(time(NULL));
	cout<<"Ingrese el numero de filas: "<<endl;
	cin>>filas;
	cout<<"Ingrese el numero de columnas: "<<endl;
	cin>>columnas;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
		arreglo[i][j]=1+rand()%(8);
		}
	}
	cout<<"Se procede a imprimir la tabla aleatoria"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<arreglo[i][j];
		}
		cout<<"\n";
	}
	//leer en nuevo arreglo
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			nuevo[i][j]=arreglo[i][j];
		}
	}
	cout<<"Se imprime en el nuevo arreglo o la nueva matriz: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<nuevo[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
