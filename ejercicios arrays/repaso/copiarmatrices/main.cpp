#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Hacer una matriz de tipo 2*2, llenarla de números y luego copiar su contenido a otra matriz*/
int main(int argc, char** argv) {
	char arreglo[2][2];
	char nuevo[2][2];
	cout<<"Se genera una tabla de 2x2 con los caracteres que ingrese"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"Ingrese los elementos para la tabla: ["<<i<<"]["<<j<<"]:";
			cin>>arreglo[i][j];
		}
	}
	cout<<"Se procede a imprimir la tabla de 2x2"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<arreglo[i][j];
		}
		cout<<"\n";
	}
	//leer en nuevo arreglo
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			nuevo[i][j]=arreglo[i][j];
		}
	}
	cout<<"Se imprime en el nuevo arreglo: "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<nuevo[i][j];
		}
		cout<<"\n";
	}
	
	return 0;
}
