#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[100];
	int n=5,i=0,j=0;
	for(i=0;i<n;i++){
		j++;
		v[i]=j;
	}
	for(i=0;i<n;i++){
		printf("%d",v[i]);
	}
	return 0;
}
