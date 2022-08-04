#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char array1[5];
	char array2[5];
	char arraytotal[15];
	int cantidadarray1,cantidadarray2,cantidadarraytotal;
	
	cout<<"ingrese la longitud del primer array: "<<endl;cin>>cantidadarray1;
	for(int i=0;i<cantidadarray1;i++){
		cout<<i+1<<"ingrese los elementos del array1: "<<endl;cin>>array1[i];
	}
	cout<<"los elementos del primer arreglo son:"<<endl;
	for(int i=0;i<cantidadarray1;i++){
	cout<<array1[i]<<endl;
}
    cout<<"ingrese la longitud del segundo array: "<<endl;cin>>cantidadarray2;
	for(int i=0;i<cantidadarray2;i++){
		cout<<i+1<<"ingrese los elementos del array2: "<<endl;cin>>array2[i];
	}
	cout<<"los elementos del segundo arreglo son:"<<endl;
	for(int i=0;i<cantidadarray2;i++){
	cout<<array2[i]<<endl;
}
     
    for(int i=0;i<5;i++){
    	arraytotal[i] = array1[i];
	}
	
	 for(int i=0;i<5;i++){
    	arraytotal[i] = array2[i-5];
	}
	for(int i =0;i<10;i++){
		cout<<arraytotal[i]<<endl;
	}
	return 0;
}
