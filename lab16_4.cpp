#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &q,int &w,int &e,int &r){
int x[4];
int y[4];
x[0]=q,x[1]=w,x[2]=e,x[3]=r;
int h,j,k,l;
h=rand()%4;
y[0]=x[h];
x[h]=0;
do{
	j=rand()%4;
}while(x[j]==0);
y[1]=x[j];
x[j]=0;	

do{
	k=rand()%4;
}while(x[k]==0);
y[2]=x[k];
x[k]=0;	

do{
	l=rand()%4;
}while(x[l]==0);
y[3]=x[l];
x[l]=0;	


q=y[0],w=y[1],e=y[2],r=y[3];



}