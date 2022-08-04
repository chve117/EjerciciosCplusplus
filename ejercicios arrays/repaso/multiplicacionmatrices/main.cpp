#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//realice un programa que calcule el producto de dos matrices cuadradas
int main(int argc, char** argv) {
	int matriz1[100][100],matriz2[100][100],matriz3[100][100];
	int filas1,filas2,columnas1,columnas2;
	//CONSTRUYENDO LA PRIMERA MATRIZ
	cout<<"PRIMERA MATRIZ"<<endl;
	cout<<"Ingrese el numero de filas para la matriz 1: "<<endl;cin>>filas1;
	cout<<"Ingrese el numero de columnas para la matriz 1: "<<endl;cin>>columnas1;
	
	for(int i=0;i<filas1;i++){
		for(int j=0;j<columnas1;j++){
			cout<<"Ingrese los elementos para la matriz: ["<<i<<"]["<<j<<"]"<<endl;
			cin>>matriz1[i][j];
		}
	}
	for(int i=0;i<filas1;i++){
		for(int j=0;j<columnas1;j++){
			cout<<matriz1[i][j];
		}
		cout<<"\n";
	}
	
	//CONSTRUYENDO LA SEGUNDA MATRIZ
    cout<<"SEGUNDA MATRIZ"<<endl;
    cout<<"Ingrese el numero de filas para la matriz 2: "<<endl;cin>>filas2;
	cout<<"Ingrese el numero de columnas para la matriz 1: "<<endl;cin>>columnas2;
	for(int i=0;i<filas2;i++){
		for(int j=0;j<columnas2;j++){
			cout<<"Ingrese los elementos para la matriz: ["<<i<<"]["<<j<<"]"<<endl;
			cin>>matriz2[i][j];
		}
	}
	for(int i=0;i<filas2;i++){
		for(int j=0;j<columnas2;j++){
			cout<<matriz2[i][j];
		}
		cout<<"\n";
	}
	
	
	return 0;
}
