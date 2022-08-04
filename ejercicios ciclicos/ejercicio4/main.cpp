#include <iostream>
using namespace std;

/*Hacer un programa en C++ que pida por teclado dos números, muestre la suma en pantalla y pregunte al usuario si quiere realizar otra suma.
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,suma,opc;
	while(opc !=2){
		cout<<"ingrese el primer valor: "<<endl;cin>>a;
		cout<<"ingrese el segundo valor: "<<endl;cin>>b;
		suma=a+b;
		cout<<"la suma total es: "<<suma<<endl;
		cout<<"desea hacer otra suma (1)si o (2) no"<<endl;cin>>opc;
	}
	cout<<"usted deseo salir."<<endl;
	return 0;
}
