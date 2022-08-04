#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int mcd(int u, int v){
	int t;
	while(u > 0){
		if(u < v){
			t=u;
			u=v;
			v=t;
		}
		u=u-v;
	}
	return v;
}

int main(int argc, char** argv) {
	int x, y;
	while(cin >> x && cin >> y){
	   if(x>0 && y>0){
	   cout<<x <<' '<<y<<' '<<mcd(x,y)<<'\n';
       }
    }
	return 0;
}
