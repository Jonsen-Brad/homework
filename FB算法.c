#include<stdio.h>
#include<string.h>
main(){
	char s[100]={0};
	char t[50]={0};
	int i,j=0,len;
	int ans;
	scanf("%s",s);
	scanf("%s",t);
	len=strlen(t);
	for(i=0;s[i]!='\0';i++){
	if(t[j]=='\0'){
		break;
	}
		if(s[i]==t[j]){
			j++;
			ans=i;
		}
		else
			j=0;
	}
	printf("%d",ans-len+2);
}
	
