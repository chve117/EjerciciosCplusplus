#include <iostream>

using namespace std;

/*Escribe un programa que defina un vetor de numeros y calcule si existe
algun numero en el vector cuyo valor equivale a la suma del resto de numeros del vector*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int array[100];
	int sumat,suman,n,mayor;
	cout<<"ingrese que tan largo sera el array: "<<endl;cin>>n;
	for(int i=0;i<n;i++){
		cout<<i+1<<"ingrese los valores del array: "<<endl;cin>>array[i];
		sumat += array[i];
		if(array[i]>mayor){
			mayor=array[i];
		}	
	}
	sumat=sumat-mayor;
	cout<<"el mayor valor es: "<<mayor<<endl; 
	cout<<"la suma es: "<<sumat<<endl; 
	if(mayor=sumat){
		cout<<"el numero de suma es igual al mayor "<<mayor<<endl;
	}else{
		cout<<"no existe un numero que es igual a la suma"<<endl;
	}
	return 0;
}
