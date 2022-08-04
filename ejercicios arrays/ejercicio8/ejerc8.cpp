#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el arreglo*/
int main(int argc, char** argv) {
	int array1[5]={1,2,3,4,5};
	int array2[5];
	for(int i=0;i<5;i++){
		array2[i]=array1[i]*2;
	}
	cout<<"elementos multiplicados: "<<endl;
	for(int i=0;i<5;i++){
		cout<<array2[i]<<endl;
	}
	return 0;
}
