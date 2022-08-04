#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int division(int dividendo,int divisor);

int main(int argc, char** argv) {
	int dividendo, divisor;
	cout<<"Ingrese el valor del dividendo"<<endl;cin>>dividendo;
	cout<<"Ingrese el valor del divisor"<<endl;cin>>divisor;
	division(dividendo,divisor);
	return 0;
}

int division(int dividendo,int divisor){
	int cociente;
	while(dividendo>=divisor){
		dividendo-=divisor;
		cociente ++;
	}
	cout<<"el sobrante es "<<dividendo<<endl;;
	cout<<"el cociente es "<<cociente<<endl;;
}   
