#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz*/
int main(int argc, char** argv) {
	int numeros[3][3];
	cout<<"Este programa realiza una matriz de 3x3 remarcando la diagonal principal"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite los valores de las filas ["<<i<<"]["<<j<<"]: ";//Imprime la posicion de los arreglos
			cin>>numeros[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[i][j];//Impresion de la matriz
		}
		cout<<"\n";
	}
	cout<<"IMPRESION DE LA DIAGONAL PRINCIPAL"<<endl;
	//Impresion de la diagonal
	for(int i=0;i<1;i++){//solo debe pasar una vez por el ciclo
			cout<<numeros[0][0]<<endl;
			cout<<" "<<numeros[1][1]<<endl;
			cout<<"  "<<numeros[2][2]<<endl;
		cout<<"\n";
	}
	return 0;
}
