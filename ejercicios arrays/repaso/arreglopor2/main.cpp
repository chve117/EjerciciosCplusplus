#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int arreglo[5];
	cout<<"Ingrese los elementos: \n"<<endl;
	for(int i=0;i<5;i++){
		cin>>arreglo[i];
		arreglo[i]=arreglo[i]*2;	
	}
	for(int i=0;i<5;i++){
		cout<<arreglo[i];
		
	}
	
	return 0;
}
