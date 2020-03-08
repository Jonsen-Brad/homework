#include<stdio.h>
#include<string.h>
int main(){
	int i = 0;
	int j;
	char a[50];
	char str;
	float xi=0.0;
	float outcome;
	int num=0;
	int flag1 = 1;
	int flag2 = 1;
	float chang = 0.0;
	gets(a);
	
	while(a[i]!='\0'){
	
		if(a[i] >= '0'&&a[i]<= '9'){
			
			
			if(a[i-1]== '-')
				flag2 = -1;
			else if(a[i-1]== '+'||i ==0||a[i-1]=='=')
				flag2 = 1;

			
			while(a[i] >= '0'&&a[i]<= '9'){
				num=num*10+(a[i]-'0');
				i++;
			}
			
			if(a[i]>='a'&&a[i]<='z'){
				str=a[i];
				xi = xi + flag1*flag2*(num);i++;
			}
			else{
				chang = chang + flag1*flag2 *(num);
				
			}
			num=0;
		}
		if(a[i] == '=')
			flag1 = -1;
		if(a[i]<'0'||a[i]>'9')
			i++;
		
	}
	outcome = chang/xi;
	printf("%c=%0.3f\n",str,-outcome);
	
			
}
