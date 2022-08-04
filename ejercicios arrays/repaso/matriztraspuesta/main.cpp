#include <iostream>
#include <conio.h>
/*Realice una matriz de 3x3 y haga su transpuesta*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int arreglo[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite los valores de las filas ["<<i<<"]["<<j<<"]: ";//Imprime la posicion de los arreglos
			cin>>arreglo[i][j];
		}
	}
	cout<<"IMPRIMIENDO LA MATRIZ ORIGINAL: \n"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arreglo[i][j];//Impresion de la matriz
		}
		cout<<"\n";
	}
	cout<<"\nIMPRIMIENDO LA MATRIZ TRANSPUESTA: \n"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arreglo[j][i];//Impresion de la matriz
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
