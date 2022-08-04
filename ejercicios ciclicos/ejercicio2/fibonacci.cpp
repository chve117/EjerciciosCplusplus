#include <iostream>
using namespace std;
/*Hacer un programa en C++ que calcule la serie de Fibonacci. La serie de Fibonacci es la sucesión de números:


0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

Cada número se calcula sumando los dos anteriores a él.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x=0,y=1,z=1,numero;
	cout<<"ingrese las bases: "<<endl;cin>>numero;
	
	for(int i=0;i<=numero;i++){
	    z=x+y;
	    cout<<z<<" ";
	    x=y;
	    y=z;
	}
	
	return 0;
}
