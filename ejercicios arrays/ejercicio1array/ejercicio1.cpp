#include <iostream>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//escriba un arreglo de numeros que sume el total y los imprima

using namespace std;

int main(int argc, char** argv) {
	int numeros[]={1,2,3,4,5};
	int suma;
	for(int i=0;i<=5;i++){
		cout<<"corre num: "<<i<<endl;
		suma=suma+numeros[i];
		cout<<"suma continua: "<<suma<<endl;
	}
	cout<<"el total es: "<<suma<<endl;
	return 0;
}
