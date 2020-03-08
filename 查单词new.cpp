#include<stdio.h>
int main(){
	char word[11];
	char article[1000005] = {0};
	int i = 0,j = 0;
	while (article[j] != '\0'){
		if(word[i] == article[j]){
			flag = 1;
		}
		else{
			i = 0;
		}
		if(article[j] == ' ')
			flag = 0;
		if(word[i] == '\0' && article[j] == ' ' && flag)
		i ++;
		if(word[i] == '\0') 
			i = 0;
		j ++;
	}
}
