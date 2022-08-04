#include <iostream>
/*Realice un programa que calcule la suma de dos matrices cuadradas de 3x3*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int matriz1[100][100],matriz2[100][100],matriz3[100][100];
	int filas, columnas, n, m,suma;
    cout<<"Ingrese el numero de filas para la primera matriz: "<<endl;cin>>filas;
    cout<<"Ingrese el numero de columnas para la primera matriz: "<<endl;cin>>columnas;
    //LECTURA DE LA PRIMERA MATRIZ
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Ingrese los elementos de la matriz: ["<<i<<"]["<<j<<"]";
			cin>>matriz1[i][j];
		}
	}
	//IMPRESION DE LA PRIMERA MATRIZ
	cout<<"Imprimiendo la primera matriz: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz1[i][j];
		}
		cout<<"\n";
	}
	//CONSTRUYENDO LA SEGUNDA MATRIZ
cout<<"Ingrese el numero de filas para la segunda matriz: "<<endl;cin>>n;
    cout<<"Ingrese el numero de columnas para la segunda matriz: "<<endl;cin>>m;
    //LECTURA DE LA PRIMERA MATRIZ
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"Ingrese los elementos de la matriz: ["<<i<<"]["<<j<<"]";
			cin>>matriz2[i][j];
		}
	}
	//IMPRESION DE LA SEGUNDA MATRIZ
	cout<<"Imprimiendo la segunda matriz: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<matriz2[i][j];
		}
		cout<<"\n";
	}
	//SUMA DE MATRIZ
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			suma=matriz1[i][j]+matriz2[i][j];
			matriz3[i][j]=suma;
		}
		cout<<"\n";
	}
	//IMPRESION DE LA MATRIZ SUMA
	cout<<"La suma de las matrices es: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz3[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
