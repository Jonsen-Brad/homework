#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char str[52];
    int i;
	int j=0;
    scanf("%d\n",&n);
    gets(str);
    	
    if (n>=26)
    	n%=26;
    for(i=0;str[i]!='\0';i++){
    	if(str[i]+n>'z'){
    		str[i]=str[i]+n-'z'-1+'a';
			printf("%c",str[i]);
		}
		else
			printf("%c",str[i]+n);
	}
    		
    	
}

