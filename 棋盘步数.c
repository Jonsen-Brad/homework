#include<stdio.h>
int count=0;
#define N 8
void road(int n,int m){
	if(n==N&&m==N)
		count++;
	else{
	
		if(n<N)
		road(n+1,m);
		if(m<N)
		road(n,m+1);
	}
}
int main(){
	road(1,1);
	printf("%d",count);
}
