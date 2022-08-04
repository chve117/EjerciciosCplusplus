#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arreg[100];
	int n, k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arreg[i];
	}
	cin>>k;
	for(int i=0;i<n;i++){
	   if(arreg[i]%k==0){
	   	cout<<arreg[i]<<" ";
	   }else if(arreg[i]%k!=0){
	   	cout<<"X ";
	   }
	}
	cout<<endl;
	return 0;
} 
