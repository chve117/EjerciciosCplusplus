#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//hacer que dos arreglos esten en uno nuevo
int main(int argc, char** argv) {
	int arre1[5]={1,2,3,4,5};
	int arre2[5]={6,7,8,9,10};
	int arre3[20];
	for(int i=0;i<5;i++){
		arre3[i]=arre1[i];
	}
	for(int i=5;i<10;i++){
		arre3[i]=arre2[i-5];
	}
	for(int i=0;i<10;i++){
		cout<<arre3[i];
	}
	return 0;
}
