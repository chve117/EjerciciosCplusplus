#include <iostream>
#include <math.h>
//hacer un programa en c++ que sin usar la funcion pow(),calcule la potencia de un numero
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//usando la funcion pow()
/*using namespace std;
int exponencial(int, int);

int main(int argc, char** argv) {
	int base, exponente;
	cout<<"ingrese la base: "<<endl;cin>>base;
	cout<<"ingrese el exponente: "<<endl;cin>>exponente;
	cout<<"el resulta es: "<<exponencial(base, exponente);
	return 0;
}

int exponencial(int x,int y){
	int resultado;
	resultado= pow(x,y);
	return resultado;
}*/

int exponencial(int, int);
using namespace std;
int main(int argc, char** argv) {
	int base, exponente;
	cout<<"ingrese la base: "<<endl;cin>>base;
	cout<<"ingrese el exponente: "<<endl;cin>>exponente;
	cout<<"el resulta es: "<<exponencial(base, exponente);
	return 0;
}

int exponencial(int x, int y){
	long resultado=1;
	for(int i;i<=y;i++){
		resultado=x*y;
	}
	return resultado;
}
