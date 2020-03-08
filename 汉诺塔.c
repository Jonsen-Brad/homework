#include<stdio.h>
int ans = 0;
void hanuo(int n,char x,char y,char z){
	if(n==1){
		ans++;
	}
	else{
		hanuo(n-1,x,z,y);
		ans++;
		hanuo(n-1,y,x,z);
	}
}
int main(){
	int n[1000000];
	int i = 0;
	int j = 0;
	while (scanf("%lld", &n[i]) != EOF) {
		i++;
	}
	
	while (j == i) {
		ans = 0;
		hanuo(n[i], 'x', 'y', 'z');
		j++;
	}
	
	return 0;
}
