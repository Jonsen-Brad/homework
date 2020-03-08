#include<stdio.h>
int count=0;
void f(int  n){

		count++;
		for(n=n/2;n>=1;n--)
		f(n);
		
}
int main(){
	int n;
	scanf("%d",&n);
	f(n);
	printf("%d",count);
}
